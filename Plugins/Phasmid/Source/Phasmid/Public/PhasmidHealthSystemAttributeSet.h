

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemTestAttributeSet.h"
#include "PhasmidHealthSystemAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidHealthSystemAttributeSet : public UAbilitySystemTestAttributeSet
{
	GENERATED_BODY()
	
	
public:
	/** This measures how much damage can be absorbed before dying. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData MaxDamagePerHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData LowHealthThreshold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData TakeDamageMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData ShieldCurrent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData ShieldRegenDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData ShieldRegenRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData ShieldMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData HealthCurrent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData HealthMax;
};