// Fill out your copyright notice in the Description page of Project Settings.

#include "FalconGameplayStatics.h"

bool UFalconGameplayStatics::AwardSkillPoint(TEnumAsByte<enum ESkillPoint> pt, const UObject * WorldContextObject)
{
	return false;
}

FString UFalconGameplayStatics::ConvertColorToHexString(FColor inColor)
{
	return FString();
}

void UFalconGameplayStatics::DebugSetArtGalleryUnlocked()
{
}

void UFalconGameplayStatics::DisableWorldRendering(bool Disable, const UObject * WorldContextObject)
{
}

FText UFalconGameplayStatics::DurationToText(float Duration)
{
	return FText();
}

UObject * UFalconGameplayStatics::FindClosestActorWithGem(UClass * LootClass, TArray<UClass*> ActorClasses)
{
	return nullptr;
}

bool UFalconGameplayStatics::FindObjectSaveDataByTypeAndParamKey(FString paramName, TEnumAsByte<enum ESkillPoint> Type, FString Level)
{
	return false;
}

void UFalconGameplayStatics::ForceUnpause(const UObject * WorldContextObject)
{
}

bool UFalconGameplayStatics::GetActiveCameraMode(const UObject * WorldContextObject)
{
	return false;
}

int UFalconGameplayStatics::GetActiveGameIndex(const UObject * WorldContextObject)
{
	return 0;
}

int UFalconGameplayStatics::GetActiveSaveSlotIndex(const UObject * WorldContextObject)
{
	return 0;
}

bool UFalconGameplayStatics::GetArtGalleryUnlocked(const UObject * WorldContextObject)
{
	return false;
}

float UFalconGameplayStatics::GetCompletionPctForGame(int gameIndex, int slotIndex, const UObject * WorldContextObject)
{
	return 0.0f;
}

float UFalconGameplayStatics::GetCompletionPctForLevel(FString Level, const UObject * WorldContextObject)
{
	return 0.0f;
}

void UFalconGameplayStatics::GetCompletionPctForSlot(bool & ReturnValue, const int saveSlotIndex, const UObject * WorldContextObject, float & pctGame3, float & pctGame2, float & pctGame1)
{
}

bool UFalconGameplayStatics::GetCreditsUnlocked(const UObject * WorldContextObject)
{
	return false;
}

bool UFalconGameplayStatics::GetCutsceneSubtitlesEnabled(const UObject * WorldContextObject)
{
	return false;
}

bool UFalconGameplayStatics::GetDragonCollected(FString dragonName, FString Level, const UObject * WorldContextObject)
{
	return false;
}

UObject * UFalconGameplayStatics::GetFalconGameState(const UObject * WorldContextObject)
{
	return nullptr;
}

UObject * UFalconGameplayStatics::GetFalconSaveComponent(const UObject * WorldContextObject)
{
	return nullptr;
}

UObject * UFalconGameplayStatics::GetFirstLocalPlayerController(const UObject * WorldContextObject)
{
	return nullptr;
}

int UFalconGameplayStatics::GetGameIndex(const UObject * WorldContextObject)
{
	return 0;
}

int UFalconGameplayStatics::GetGameInventoryTotalForType(EInventoryType inventoryType, int gameIndex, const UObject * WorldContextObject)
{
	return 0;
}

void UFalconGameplayStatics::SetGameIndex(int gameIndex, const UObject * WorldContextObject)
{
}

bool UFalconGameplayStatics::PauseGame(bool bPauseAudio, const UObject * WorldContextObject)
{
	return false;
}

float UFalconGameplayStatics::GetTimePlayedForGame(const UObject * WorldContextObject)
{
	return 0.0f;
}

void UFalconGameplayStatics::StartTimePlayedClock(const UObject * WorldContextObject)
{
}

void UFalconGameplayStatics::StopTimePlayedClock(const UObject * WorldContextObject)
{
}

void UFalconGameplayStatics::UnpauseGame(bool & UnpauseGame, const UObject * WorldContextObject)
{
}
