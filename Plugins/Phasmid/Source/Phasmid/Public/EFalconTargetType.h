

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EFalconTargetType.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconTargetType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum EFalconTargetType
{
	Player,
	Origin,
	Waypoint,
	Target,
	Myself
};