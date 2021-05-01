

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EFalconMovementMode.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconMovementMode : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class EFalconMovementMode
{
	None,
	TraverseWaypointsOnce,
	TraverseWaypointsLooped,
	FleeFromPlayer,
	SeekPlayer,
	FacePlayer,
	ReverseTraverseWaypoints,
	ReverseTraverseWaypointsLooped,
	ReturnToOrigin,
	SplineJump,
	Wander,
	LaunchFromDamage,
	ReturnToOriginWithoutFacing
};
