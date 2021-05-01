

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "EFalconFacingMode.h"
#include "EFalconTargetType.h"
#include "EFalconMovementMode.h"
#include "Particles/Emitter.h"
#include "GameplayTagContainer.h"
#include "FalconEverythingState.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconEverythingStateStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FFalconEverythingState
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ActorTickIntervalOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WanderTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WanderOuterRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WanderDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Signal; //Unknown Struct

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bKeepVelocityOnStateChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bStartAtNearestWaypoint;



	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	TArray<> MaterialParamaterCurves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Triggers	;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool SpawnCollectibles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bDisableAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bDisableCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bDestroySelfOnExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bResetGlobalTriggers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AEmitter* ExitStateEmitter; //Probably Wrong
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AEmitter* EnterStateEmitter; //Probably Wrong

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UClass* SpawnActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FGameplayTagContainer Immunities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* Waypoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FGameplayTagContainer ProjectileSettings; //Maybe a gameplay tag container?
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	TArray<struct> CollisionRegionSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<int32, FString> DamageTypeLaunchParamsOverrides; //TMap is wrong
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EFalconTargetType> FacingTarget;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EFalconFacingMode> FacingMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EFalconFacingMode> MovementTarget; //Wrong ENUM

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EFalconMovementMode> MovementMode; //Wrong ENUM

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MontageStartOffsetPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* Montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName stateName;
};