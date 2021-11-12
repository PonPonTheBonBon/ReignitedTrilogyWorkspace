

#include "FalconEnemyStateComponent.h"


// Sets default values for this component's properties
UFalconEnemyStateComponent::UFalconEnemyStateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


bool UFalconEnemyStateComponent::AllLootCollected()
{
	return false;
}

void UFalconEnemyStateComponent::BP_AddActorToWatchList(AActor * Actor, FName NextStateName)
{
}

void UFalconEnemyStateComponent::BP_AddActorToWatchListByIndex(AActor * Actor, uint8 Index)
{
}

void UFalconEnemyStateComponent::BP_OnEnterState()
{
}

void UFalconEnemyStateComponent::BP_OnExitState(UObject * NextState)
{
}

void UFalconEnemyStateComponent::BP_SetTarget(UObject * Actor)
{
}

void UFalconEnemyStateComponent::BP_SetWaypoints(ATargetPoint * Points)
{
}

void UFalconEnemyStateComponent::BP_UpdateWanderParams(float TurnRate, float OuterRadius, float Delay)
{
}

FName UFalconEnemyStateComponent::GetStateName()
{
	return FName();
}

bool UFalconEnemyStateComponent::WillSpawnCollectibleOfType(UClass *& Class)
{
	return false;
}

// Called when the game starts
void UFalconEnemyStateComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFalconEnemyStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

