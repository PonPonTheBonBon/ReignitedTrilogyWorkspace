

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "PhasmidCameraArmComponent.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidCameraArmComponent : public USpringArmComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MinTimeScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float OuterProbeSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxArmAngularSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ArmAngularDecel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bUsePitchOffset;

};
