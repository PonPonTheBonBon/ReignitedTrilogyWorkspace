

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemTestAttributeSet.h"
#include "PhasmidBasicDamageAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidBasicDamageAttributeSet : public UAbilitySystemTestAttributeSet
{
	GENERATED_BODY()
	
public:
	/** This measures how much damage can be absorbed before dying. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		float DamageRepeatInterval;
		
	//This is probably not how you do this
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		float CritMultiplier_0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		float DamageBase;
};
