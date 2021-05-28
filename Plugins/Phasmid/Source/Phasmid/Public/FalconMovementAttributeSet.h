

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemTestAttributeSet.h"
#include "FalconMovementAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconMovementAttributeSet : public UAbilitySystemTestAttributeSet
{
	GENERATED_BODY()
	
public:
	/** This measures how much damage can be absorbed before dying. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData GlideDescentMultiplierGlideDescentMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData FlyVerticalComponentMult;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData JumpGravityFlyUp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData RotationInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData MaxFlySpeedBoost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData UnderwaterPitchRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData UnderwaterYawRate;
};