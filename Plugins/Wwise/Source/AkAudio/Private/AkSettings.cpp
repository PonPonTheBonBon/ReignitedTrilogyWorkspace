// Copyright (c) 2006-2018 Audiokinetic Inc. / All Rights Reserved

#include "AkSettings.h"
#include "AkAudioDevice.h"
#include "AkUnrealHelper.h"
#include "AkSettingsPerUser.h"

#if WITH_EDITOR
#include "Settings/ProjectPackagingSettings.h"
#endif

#include "UObject/UnrealType.h"

//////////////////////////////////////////////////////////////////////////
// UAkSettings

UAkSettings::UAkSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UAkSettings::PostInitProperties()
{
	Super::PostInitProperties();

#if WITH_EDITOR
	UAkSettingsPerUser* AkSettingsPerUser = GetMutableDefault<UAkSettingsPerUser>();

	if (AkSettingsPerUser)
	{
		bool didChanges = false;

		if (!WwiseWindowsInstallationPath_DEPRECATED.Path.IsEmpty())
		{
			AkSettingsPerUser->WwiseWindowsInstallationPath = WwiseWindowsInstallationPath_DEPRECATED;
			didChanges = true;
		}

		if (!WwiseMacInstallationPath_DEPRECATED.FilePath.IsEmpty())
		{
			AkSettingsPerUser->WwiseMacInstallationPath = WwiseMacInstallationPath_DEPRECATED;
			didChanges = true;
		}

		if (didChanges)
		{
			AkSettingsPerUser->SaveConfig();
		}
	}
#endif
}

#if WITH_EDITOR
void UAkSettings::PreEditChange(UProperty* PropertyAboutToChange)
{
	PreviousWwiseProjectPath = WwiseProjectPath.FilePath;
}

void UAkSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	const FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	const FName MemberPropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None;

	if ( PropertyName == GET_MEMBER_NAME_CHECKED(UAkSettings, MaxSimultaneousReverbVolumes) )
	{
		MaxSimultaneousReverbVolumes = FMath::Clamp<uint8>( MaxSimultaneousReverbVolumes, 0, AK_MAX_AUX_PER_OBJ );
		FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
		if( AkAudioDevice )
		{
			AkAudioDevice->SetMaxAuxBus(MaxSimultaneousReverbVolumes);
		}
	}
	else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(UAkSettings, WwiseProjectPath))
	{
		AkUnrealHelper::SanitizeProjectPath(WwiseProjectPath.FilePath, PreviousWwiseProjectPath, FText::FromString("Please enter a valid Wwise project"), bRequestRefresh);
	}
    else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(UAkSettings, bAutoConnectToWAAPI))
    {
        OnAutoConnectChanged.Broadcast();
    }

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif // WITH_EDITOR
