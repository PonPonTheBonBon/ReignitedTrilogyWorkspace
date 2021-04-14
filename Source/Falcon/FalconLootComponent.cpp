// Fill out your copyright notice in the Description page of Project Settings.

#include "FalconLootComponent.h"


bool UFalconLootComponent::DropsLootOfType(bool filterCollected, UClass * LootClass)
{
	return false;
}



// Sets default values for this component's properties
UFalconLootComponent::UFalconLootComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFalconLootComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFalconLootComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

