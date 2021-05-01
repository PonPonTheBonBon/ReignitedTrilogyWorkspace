

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "SpyroCharacterInitialData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FSpyroCharacterInitialData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlightMaxPitchAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlightPitchRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlightYawRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float UnderwaterYawRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float UnderwaterPitchRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ConformToGroundInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CamRotationMultFreeLook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CamRotationMultRightStick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SideRollControlRotationMult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float GroundMovemementControlRotationMult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlyVerticalComponentMult;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RotationInterpSpeed;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float GlideDescentMultiplier;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float FootstepMaxRange;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float FootstepLoudness;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float NavAgentHeight;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float NavAgentRadius;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float WalkableFloorAngle;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float MaxStepHeight;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float RotationRateYaw;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float BrakingDecelerationFlying;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float MaxFlySpeed;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float JumpOffJumpZFactor;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float FallingLateralFriction;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float GroundFriction;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float AirControlBoostThreshold;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float AirControl;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float BrakingDecelerationFalling;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float SecondJumpZVelocity;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float JumpGravityFlyUp;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float JumpMaxHoldTime;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float JumpZVelocity;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float BrakingDecelerationWalking;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float MaxWalkSpeedCrouched;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float MaxWalkSpeed;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float CrouchedHalfHeight;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float MaxAcceleration;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float GravityScale;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float HealthMax;

};