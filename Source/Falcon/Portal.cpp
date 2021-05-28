

#include "Portal.h"


// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APortal::AddCamLocationSlave(float Duration, FVector slaveLocation)
{
}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{

	
}

bool APortal::CanLoadLevel()
{
	return false;
}

bool APortal::CheckForPatch()
{
	return false;
}

void APortal::EnablePortalCollectibles(bool Enabled)
{
}

void APortal::GetProgressionInfo(FString NewLevelPath, FString NewCheckpointName)
{
}

FVector APortal::GetSpawnTransform()
{
	return FVector();
}

void APortal::HandlePlayerSpawn(float delayDuration)
{
}

void APortal::HandlePlayerSpawnAfterFade()
{
}

void APortal::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
}

void APortal::OnPartnerPortalFound(UObject *& FoundParter)
{
}

void APortal::ReceivePortalStart()
{
}

bool APortal::RemoveDownloadMessage()
{
	return false;
}

void APortal::setPortalEnabled(bool Enabled)
{
}

void APortal::setPortalVisible(bool visible)
{
}

void APortal::SwitchBeforeTransport()
{
}

void APortal::TriggerPreload()
{
}

bool APortal::TriggerTransport(UObject * playerCharacter)
{
	return false;
}

bool APortal::UnTriggerPreload()
{
	return false;
}
// Called every frame
void APortal::Tick(float DeltaTime)
{


}

