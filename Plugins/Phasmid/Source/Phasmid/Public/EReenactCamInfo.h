

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EReenactCamInfo.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UReenactCamInfo : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class EReenactCamInfo
{
	None,
	WithOffset,
	WithoutOffset	
};