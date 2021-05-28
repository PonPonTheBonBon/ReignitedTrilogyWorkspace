

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemTestAttributeSet.h"
#include "PhasmidCharacterAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidCharacterAttributeSet : public UAbilitySystemTestAttributeSet
{
	GENERATED_BODY()
	
public:
	/** This measures how much damage can be absorbed before dying. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData JumpMaxHoldTime;
};