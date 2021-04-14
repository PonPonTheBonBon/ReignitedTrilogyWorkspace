// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FalconGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API AFalconGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable)
		static void ShowInventoryUI();

	
	
};
