// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldEventListenerComponent.h"


// Sets default values
AWorldEventListenerComponent::AWorldEventListenerComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldEventListenerComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldEventListenerComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

