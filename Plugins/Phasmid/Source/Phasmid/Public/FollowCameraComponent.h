// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Math/UnrealMathUtility.h"
#include "EReenactCamInfo.h"
#include "FollowCameraComponent.generated.h"



/**
 * 
 */
UCLASS()
class PHASMID_API UFollowCameraComponent : public UCameraComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void ClearDebugCaminfo();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void ClearYawOffsetClamp();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool CutDebugCamInfo(int PreviousCount, int Index);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool DrawDebugCamInfo(bool bDrawPositionTrace, bool bDrawPullInTrace, int PreviousCount, int Index);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static float GetCameraPitch();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static float GetCameraYaw();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool GetCenteringBlocked();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static float GetCurrentRadiusTarget();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static int GetDebugCamInfoNum();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject")) 
		static FMinimalViewInfo GetDefaultCameraSettings(); //Needs to return struct probably MinimalViewInfo
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool IsTransitioning();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void PauseUpdate(bool bPause);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool PopCameraSettings(FViewTargetTransitionParams TransitionSettings, int SettingsId);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static int PushCameraSettings(FViewTargetTransitionParams TransitionSettings, FViewTargetTransitionParams SettingsTHISISNOTCORRECT);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void Reset();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void ResetBehind(float angle);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static int RetraceDebugInfo(int Index);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetActiveCenterMode(bool NewActive);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetCameraYaw(float Yaw);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetDefaultPitchByActorZ(float ReferenceHeight, UObject* CameraActor); //don't know structs so they're left out InterpSettings, AngleClamp, MaxHeightDiff
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void UpdateRecenterVerticalAngle(float NewAngle);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void UpdateTargetOffset(float NewOffset);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetCameraPitchYaw(float Pitch, float Yaw);

public:
	//Don't know most of the structs in here, and the ones I did are probably wrong
	//UPROPERTY(EditAnywhere, BlueprintReadWrite) 
	//	Struct m_useRotVInterpSettings; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_traceLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_defaultPitchByHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_traceToCeiling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bStabilizeCameraOnSettingsChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<enum EReenactCamInfo> ReenactCamInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bRecordCamInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector m_tgtFPOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_centerInterpMin;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_centerIdleParams;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ActiveCamDeceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ActiveCamAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_centerToHoldTime;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_centerActiveInterpParams;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_centerHoldInterpParams;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_centerInterpParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bEnableIdleVerticalCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_idleMoveTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_idleRampTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_idleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_complexTrace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_useBothSticksAsCamInput;

	/** Disable Camera Rotation Input. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_ignoreRightStickInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_useRawCamPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector m_collisionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_numFramesSmoothPan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_numFramesSmooth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_panAheadScalar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_lookAheadScalar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bDebugDrawLocators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* m_returnToSecondaryTargetCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_secondaryTgtDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_secondaryTgtMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector m_secondaryTgtOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* SecondaryTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrSecondTargetInterp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrYawClamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrAngleV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrInterpV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_maxCtrDelta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrDecelTimeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrDecelAngleTurnModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrDecelAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ctrInterp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ceilingGmblOffset;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_colInterpOut;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_colInterpIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_snapBounceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_snapInVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bcolSnapIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_colClipMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bPullInOnCamCollisionOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_camRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_colRadius;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_posZInterp;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_clampZHard;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_clampZSoft;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_fovInputScale;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_rotLimitV;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_rotInterpV;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_rotInterpH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_rotSpeedV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_rotSpeedH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_yawClamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_radDefaultAtLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_radDefault;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	Struct m_gmblOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector m_tgtOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName CameraYAxisName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName CameraXAxisName;


};
