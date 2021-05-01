// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "ESkillPoint.h"
#include "EInventoryType.h"
#include "Math/Color.h"
#include "FalconGameplayStatics.generated.h"

/**
 * 
 */

UCLASS()
class FALCON_API UFalconGameplayStatics : public UGameplayStatics
{
	GENERATED_BODY()
		
		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool AwardSkillPoint(TEnumAsByte<enum ESkillPoint> pt, const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable)
		static FString ConvertColorToHexString(FColor inColor);	

		UFUNCTION(BlueprintCallable)
		static void DebugSetArtGalleryUnlocked();

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void DisableWorldRendering(bool Disable, const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable)
		static FText DurationToText(float Duration);

		UFUNCTION(BlueprintCallable)
		static UObject* FindClosestActorWithGem(UClass* LootClass, TArray<UClass*> ActorClasses);

		UFUNCTION(BlueprintCallable) //Not entirely done, Enum needs to be Type but don't know what Type enum is
		static bool FindObjectSaveDataByTypeAndParamKey(FString paramName, TEnumAsByte<enum ESkillPoint> Type, FString Level);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void ForceUnpause(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool GetActiveCameraMode(const UObject* WorldContextObject);
		
		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static int GetActiveGameIndex(const UObject* WorldContextObject);
		
		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static int GetActiveSaveSlotIndex(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool GetArtGalleryUnlocked(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static float GetCompletionPctForGame(int gameIndex, int slotIndex, const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static float GetCompletionPctForLevel(FString Level, const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void GetCompletionPctForSlot(bool& ReturnValue, const int saveSlotIndex, const UObject* WorldContextObject, float& pctGame3, float& pctGame2, float& pctGame1);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool GetCreditsUnlocked(const UObject* WorldContextObject);

		/* Duplicate function name from gameplaystatics
		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static FString GetCurrentLevelName(const UObject* WorldContextObject);
		*/

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool GetCutsceneSubtitlesEnabled(const UObject* WorldContextObject);
		
		/* TODO: Learn Structs and how to use them in Functions
		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void GetDebugSaveParams(const UObject* WorldContextObject, FsaveParams saveParams);
		*/

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool GetDragonCollected(FString dragonName, FString Level, const UObject* WorldContextObject);
		
		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static UObject* GetFalconGameState(const UObject* WorldContextObject);
		
		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static UObject* GetFalconSaveComponent(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static UObject* GetFirstLocalPlayerController(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static int GetGameIndex(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static int GetGameInventoryTotalForType(EInventoryType inventoryType,int gameIndex, const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetGameIndex(int gameIndex, const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool PauseGame(bool bPauseAudio, const UObject* WorldContextObject);
		
		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static float GetTimePlayedForGame(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void StartTimePlayedClock(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void StopTimePlayedClock(const UObject* WorldContextObject);

		UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void UnpauseGame(bool& UnpauseGame, const UObject* WorldContextObject);

};

