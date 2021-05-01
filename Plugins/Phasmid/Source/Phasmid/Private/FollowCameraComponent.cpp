// Fill out your copyright notice in the Description page of Project Settings.

#include "FollowCameraComponent.h"

void UFollowCameraComponent::ClearDebugCaminfo()
{
}

void UFollowCameraComponent::ClearYawOffsetClamp()
{
}

bool UFollowCameraComponent::CutDebugCamInfo(int PreviousCount, int Index)
{
	return false;
}

bool UFollowCameraComponent::DrawDebugCamInfo(bool bDrawPositionTrace, bool bDrawPullInTrace, int PreviousCount, int Index)
{
	return false;
}

float UFollowCameraComponent::GetCameraPitch()
{
	return 0.0f;
}

float UFollowCameraComponent::GetCameraYaw()
{
	return 0.0f;
}

bool UFollowCameraComponent::GetCenteringBlocked()
{
	return false;
}

float UFollowCameraComponent::GetCurrentRadiusTarget()
{
	return 0.0f;
}

int UFollowCameraComponent::GetDebugCamInfoNum()
{
	return 0;
}

FMinimalViewInfo UFollowCameraComponent::GetDefaultCameraSettings()
{
	return FMinimalViewInfo();
}

void UFollowCameraComponent::Reset()
{
}

bool UFollowCameraComponent::IsTransitioning()
{
	return false;
}

void UFollowCameraComponent::PauseUpdate(bool bPause)
{
}

bool UFollowCameraComponent::PopCameraSettings(FViewTargetTransitionParams TransitionSettings, int SettingsId)
{
	return false;
}

int UFollowCameraComponent::PushCameraSettings(FViewTargetTransitionParams TransitionSettings, FViewTargetTransitionParams SettingsTHISISNOTCORRECT)
{
	return 0;
}

void UFollowCameraComponent::ResetBehind(float angle)
{
}

int UFollowCameraComponent::RetraceDebugInfo(int Index)
{
	return 0;
}

void UFollowCameraComponent::SetActiveCenterMode(bool NewActive)
{
}

void UFollowCameraComponent::SetCameraYaw(float Yaw)
{
}

void UFollowCameraComponent::SetDefaultPitchByActorZ(float ReferenceHeight, UObject * CameraActor)
{
}

void UFollowCameraComponent::UpdateRecenterVerticalAngle(float NewAngle)
{
}

void UFollowCameraComponent::UpdateTargetOffset(float NewOffset)
{
}

void UFollowCameraComponent::SetCameraPitchYaw(float Yaw, float Pitch)
{
}
