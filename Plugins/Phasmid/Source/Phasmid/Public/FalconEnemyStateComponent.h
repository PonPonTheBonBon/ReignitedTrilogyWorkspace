

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/TargetPoint.h"
#include "FalconEnemyStateComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PHASMID_API UFalconEnemyStateComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFalconEnemyStateComponent();

	UFUNCTION(BlueprintCallable)
	static bool AllLootCollected();	
	
	UFUNCTION(BlueprintCallable)
	static void BP_AddActorToWatchList(AActor* Actor, FName NextStateName);	
	
	UFUNCTION(BlueprintCallable)
	static void BP_AddActorToWatchListByIndex(AActor* Actor, uint8 Index);	
	
	UFUNCTION(BlueprintCallable)
	static void BP_OnEnterState();	
	
	UFUNCTION(BlueprintCallable)
	static void BP_OnExitState(UObject* NextState);	
	
	UFUNCTION(BlueprintCallable)
	static void BP_SetTarget(UObject* Actor);	
	
	UFUNCTION(BlueprintCallable)
	static void BP_SetWaypoints(ATargetPoint* Points);
	
	UFUNCTION(BlueprintCallable)
	static void BP_UpdateWanderParams(float TurnRate, float OuterRadius, float Delay);

	UFUNCTION(BlueprintCallable)
	static FName GetStateName();	
	
	UFUNCTION(BlueprintCallable)
	static bool WillSpawnCollectibleOfType(UClass*& Class);
	

	/*
	MulticastDelegateProperty Phasmid.FalconEnemyStateComponent.OnProjectileSpawned
	MulticastDelegateProperty Phasmid.FalconEnemyStateComponent.OnExitStateDelegate
	MulticastDelegateProperty Phasmid.FalconEnemyStateComponent.OnEnterStateDelegate
	MulticastDelegateProperty Phasmid.FalconEnemyStateComponent.OnCollectibleSpawned
	MulticastDelegateProperty Phasmid.FalconEnemyStateComponent.OnActorSpawned
	
	
	StructProperty State  //Struct uses FalconEverythingTrigger
	*/

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
