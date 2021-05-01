

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EFalconFacingMode.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconFacingMode : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class EFalconFacingMode
{
	None,
	FaceTarget,
	FaceMovement
};
