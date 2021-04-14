// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FalconLootComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FALCON_API UFalconLootComponent : public UActorComponent
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		static bool DropsLootOfType(bool filterCollected, UClass *LootClass);
		//UFUNCTION(BlueprintCallable)
		//static bool getObjectSaveData(USTRUCT() saveData);
public:	
	// Sets default values for this component's properties
	UFalconLootComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
