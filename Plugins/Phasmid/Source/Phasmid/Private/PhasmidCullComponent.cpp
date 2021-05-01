

#include "PhasmidCullComponent.h"


// Sets default values for this component's properties
UPhasmidCullComponent::UPhasmidCullComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPhasmidCullComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPhasmidCullComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPhasmidCullComponent::CheckCull()
{
}

bool UPhasmidCullComponent::GetGameStateCullReady()
{
	return false;
}

bool UPhasmidCullComponent::GetMeshOffScreen(UObject * MeshComponent)
{
	return false;
}

bool UPhasmidCullComponent::GetOffScreen()
{
	return false;
}

bool UPhasmidCullComponent::IsActorCulled()
{
	return false;
}

bool UPhasmidCullComponent::IsCulled()
{
	return false;
}

void UPhasmidCullComponent::SetActorEnabled(bool bNewEnabled)
{
}

void UPhasmidCullComponent::SetAutoUpdateCull(bool bNewEnabled)
{
}

void UPhasmidCullComponent::SetCullDistance(float NewCullDistance)
{
}

void UPhasmidCullComponent::SetGameStateCullReady(bool bReady)
{
}

void UPhasmidCullComponent::UnbindFromCull(UObject * EventOwner)
{
}
