// Copyright (c) 2006-2017 Audiokinetic Inc. / All Rights Reserved

#include "AkComponentCallbackManager.h"
#include "AkAudioDevice.h"
#include "AkInclude.h"
#include "AkAudioClasses.h"
#include "Misc/ScopeLock.h"

struct FAkComponentCallbackManager_Constants
{
	/// Optimization policy
	enum class Optimize
	{
		MemoryUsage,
		Speed,

		Value = MemoryUsage, ///< Set to either MemoryUsage or Speed
	};

	/// The default number of expected simultaneously playing sounds on a specific GameObject
	enum { ReserveSize = 8, };
};

FAkComponentCallbackManager* FAkComponentCallbackManager::Instance = nullptr;

FAkComponentCallbackManager* FAkComponentCallbackManager::GetInstance()
{
	return Instance;
}

void FAkComponentCallbackManager::AkComponentCallback(AkCallbackType in_eType, AkCallbackInfo* in_pCallbackInfo)
{
	auto pPackage = (AkUserCallbackPackage*)in_pCallbackInfo->pCookie;

	if(pPackage->pfnUserCallback == nullptr && pPackage->uUserFlags == 0 && in_eType != AK_EndOfEvent)
		return;

	AkUserCallbackPackage Package;
	if (Instance)
	{
		const auto& gameObjID = in_pCallbackInfo->gameObjID;
		bool deletePackage = false;

		{
			FScopeLock Lock(&Instance->CriticalSection);
			auto pPackageSet = Instance->GameObjectToPackagesMap.Find(gameObjID);
			if (pPackageSet)
			{
				Package = *pPackage;

				if (in_eType == AK_EndOfEvent)
				{
					Instance->RemovePackageFromSet(pPackageSet, pPackage, gameObjID);
					deletePackage = true;
				}
			}
		}

		if (deletePackage)
			delete pPackage;
	}

	if (Package.pfnUserCallback && (Package.uUserFlags & in_eType) != 0)
	{
		in_pCallbackInfo->pCookie = Package.pUserCookie;
		Package.pfnUserCallback(in_eType, in_pCallbackInfo);
		in_pCallbackInfo->pCookie = pPackage;
	}
}

FAkComponentCallbackManager::FAkComponentCallbackManager()
{
	if (Instance != nullptr)
	{
		UE_LOG(LogInit, Error, TEXT("FAkComponentCallbackManager has already been instantiated."));
	}

	Instance = this;
}

FAkComponentCallbackManager::~FAkComponentCallbackManager()
{
	for (auto& Item : GameObjectToPackagesMap)
		for (auto pPackage : Item.Value)
			delete pPackage;

	Instance = nullptr;
}

AkUserCallbackPackage* FAkComponentCallbackManager::CreateCallbackPackage(AkCallbackFunc in_cbFunc, void* in_Cookie, uint32 in_Flags, AkGameObjectID in_gameObjID)
{
	auto pPackage = new AkUserCallbackPackage(in_cbFunc, in_Cookie, in_Flags);
	if (pPackage)
	{
		FScopeLock Lock(&CriticalSection);
		GameObjectToPackagesMap.FindOrAdd(in_gameObjID).Add(pPackage);
		if (in_cbFunc != nullptr && in_Flags != 0)
		{
			UserCookieToCallbackPackageMap.Add(in_Cookie, pPackage);
		}
	}

	return pPackage;
}

void FAkComponentCallbackManager::RemoveCallbackPackage(AkUserCallbackPackage* in_Package, AkGameObjectID in_gameObjID)
{
	{
		FScopeLock Lock(&CriticalSection);
		auto pPackageSet = GameObjectToPackagesMap.Find(in_gameObjID);
		if (pPackageSet)
			RemovePackageFromSet(pPackageSet, in_Package, in_gameObjID);
	}

	delete in_Package;
}

void FAkComponentCallbackManager::CancelCallbackCookie(void* in_Cookie)
{
	// We want to cancel the callback for the user, but we still need the EndOfEvent callback to happen
	// for our internal bookkeeping. Just invalidate the user info in the packages.
	FScopeLock Lock(&CriticalSection);
	TArray<AkUserCallbackPackage*> PackagesToCancel;
	UserCookieToCallbackPackageMap.MultiFind(in_Cookie, PackagesToCancel);
	for (auto iter = PackagesToCancel.CreateConstIterator(); iter; ++iter)
	{
		if (*iter)
		{
			(*iter)->pfnUserCallback = nullptr;
			(*iter)->uUserFlags = 0;
		}
	}

}

void FAkComponentCallbackManager::RegisterGameObject(AkGameObjectID in_gameObjID)
{
	if (FAkComponentCallbackManager_Constants::Optimize::Value == FAkComponentCallbackManager_Constants::Optimize::Speed)
	{
		FScopeLock Lock(&CriticalSection);
		GameObjectToPackagesMap.FindOrAdd(in_gameObjID).Reserve(FAkComponentCallbackManager_Constants::ReserveSize);
	}
}

void FAkComponentCallbackManager::UnregisterGameObject(AkGameObjectID in_gameObjID)
{
	// after the following function call, all callbacks associated with this gameObjID will be completed
	AK::SoundEngine::CancelEventCallbackGameObject(in_gameObjID);

	FScopeLock Lock(&CriticalSection);
	auto pPackageSet = GameObjectToPackagesMap.Find(in_gameObjID);
	if (pPackageSet)
	{
		for (auto pPackage : *pPackageSet)
		{
			UserCookieToCallbackPackageMap.Remove(pPackage->pUserCookie, pPackage);
			delete pPackage;
		}

		GameObjectToPackagesMap.Remove(in_gameObjID);
	}
}

bool FAkComponentCallbackManager::HasActiveEvents(AkGameObjectID in_gameObjID)
{
	FScopeLock Lock(&CriticalSection);
	auto pPackageSet = GameObjectToPackagesMap.Find(in_gameObjID);
	return pPackageSet && pPackageSet->Num() > 0;
}

void FAkComponentCallbackManager::RemovePackageFromSet(FAkComponentCallbackManager::PackageSet* in_pPackageSet, AkUserCallbackPackage* in_pPackage, AkGameObjectID in_gameObjID)
{
	in_pPackageSet->Remove(in_pPackage);
	UserCookieToCallbackPackageMap.Remove(in_pPackage->pUserCookie, in_pPackage);
	if (FAkComponentCallbackManager_Constants::Optimize::Value == FAkComponentCallbackManager_Constants::Optimize::MemoryUsage)
	{
		if (in_pPackageSet->Num() == 0)
			GameObjectToPackagesMap.Remove(in_gameObjID);
	}
}
