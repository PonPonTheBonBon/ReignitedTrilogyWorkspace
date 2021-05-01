// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkRoomComponent.cpp:
=============================================================================*/

#include "AkRoomComponent.h"
#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "Components/BrushComponent.h"
#include "GameFramework/Volume.h"
#include "Model.h"
#include "EngineUtils.h"

/*------------------------------------------------------------------------------------
	UAkRoomComponent
------------------------------------------------------------------------------------*/

UAkRoomComponent::UAkRoomComponent(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	ParentVolume = NULL;

	// Property initialization
	NextLowerPriorityComponent = NULL;
	
	WallOcclusion = 1.0f;

	bEnable = true;
	bWantsInitializeComponent = true;
}

FName UAkRoomComponent::GetName() const
{
	return ParentVolume->GetFName();
}

bool UAkRoomComponent::HasEffectOnLocation(const FVector& Location) const
{
	// Need to add a small radius, because on the Mac, EncompassesPoint returns false if
	// Location is exactly equal to the Volume's location
	static float RADIUS = 0.01f;
	return RoomIsActive() && ParentVolume->EncompassesPoint(Location, RADIUS);
}

void UAkRoomComponent::PostLoad()
{
	Super::PostLoad();
	InitializeParentVolume();
}

void UAkRoomComponent::InitializeComponent()
{
	Super::InitializeComponent();

	AddSpatialAudioRoom();
}

void UAkRoomComponent::InitializeParentVolume()
{
	ParentVolume = Cast<AVolume>(GetOwner());
	if (!ParentVolume)
	{
		bEnable = false;
		UE_LOG(LogAkAudio, Error, TEXT("UAkRoomComponent requires to be attached to an actor inheriting from AVolume."));
	}
}

void UAkRoomComponent::UninitializeComponent()
{
	Super::UninitializeComponent();
	RemoveSpatialAudioRoom();
}

AkRoomParams UAkRoomComponent::GetRoomParams()
{
	TArray<AAkAcousticPortal*> IntersectingPortals;

	FString nameStr = ParentVolume->GetName();

	FRotator rotation = ParentVolume->GetActorRotation();

	FVector Front = rotation.RotateVector(FVector::RightVector);
	FVector Up = rotation.RotateVector(FVector::UpVector);

	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (!AkAudioDevice)
		return AkRoomParams();

	AkRoomParams params;
	AkAudioDevice->FVectorToAKVector(Front, params.Front);
	AkAudioDevice->FVectorToAKVector(Up, params.Up);
	params.strName = TCHAR_TO_ANSI(*nameStr);

	params.WallOcclusion = WallOcclusion;

	UAkLateReverbComponent* pRvbCmtp = (UAkLateReverbComponent*)ParentVolume->GetComponentByClass(UAkLateReverbComponent::StaticClass());
	if (pRvbCmtp)
	{
		params.ReverbAuxBus = pRvbCmtp->GetAuxBusId();
		params.ReverbLevel = pRvbCmtp->SendLevel;
	}

	params.Priority = Priority*100.f;

	return params;
}

void UAkRoomComponent::AddSpatialAudioRoom()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (RoomIsActive() && AkAudioDevice)
	{
		AkAudioDevice->AddRoom(this, GetRoomParams());
		RoomAdded = true;
	}
}

void UAkRoomComponent::UpdateSpatialAudioRoom()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (RoomIsActive() && AkAudioDevice)
	{
		AkAudioDevice->UpdateRoom(this, GetRoomParams());
	}
}

void UAkRoomComponent::RemoveSpatialAudioRoom()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (RoomIsActive() && AkAudioDevice)
	{
		AkAudioDevice->RemoveRoom(this);
		RoomAdded = false;
	}
}

#if WITH_EDITOR
void UAkRoomComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	InitializeParentVolume();
	
	//Call add again to update the room parameters, if it has already been added.
	if (RoomAdded)
		UpdateSpatialAudioRoom();
}
#endif
