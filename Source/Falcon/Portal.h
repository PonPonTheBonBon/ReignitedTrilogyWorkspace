

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"

UCLASS()
class FALCON_API APortal : public AActor
{

	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortal();

	UFUNCTION(BlueprintCallable)
		static void AddCamLocationSlave(float Duration, FVector slaveLocation);
	UFUNCTION(BlueprintCallable)
		static bool CanLoadLevel();
	UFUNCTION(BlueprintCallable)
		static bool CheckForPatch();
	UFUNCTION(BlueprintCallable)
		static void EnablePortalCollectibles(bool Enabled);	
	UFUNCTION(BlueprintCallable)
		static void GetProgressionInfo(FString NewLevelPath, FString NewCheckpointName);
	UFUNCTION(BlueprintCallable)
		static FVector GetSpawnTransform();	
	UFUNCTION(BlueprintCallable)
		static void HandlePlayerSpawn(float delayDuration);	
	UFUNCTION(BlueprintCallable)
		static void HandlePlayerSpawnAfterFade();	
	UFUNCTION(BlueprintCallable)
		static void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable)
		static void OnPartnerPortalFound(UObject*& FoundParter);	
	UFUNCTION(BlueprintCallable)
		static void ReceivePortalStart();	
	
	UFUNCTION(BlueprintCallable)
		static bool RemoveDownloadMessage();
	UFUNCTION(BlueprintCallable)
		static void setPortalEnabled(bool Enabled);
	UFUNCTION(BlueprintCallable)
		static void setPortalVisible(bool visible);
	UFUNCTION(BlueprintCallable)
		static void SwitchBeforeTransport();
	UFUNCTION(BlueprintCallable)
		static void TriggerPreload();	
	UFUNCTION(BlueprintCallable)
		static bool TriggerTransport(UObject* playerCharacter);	
	UFUNCTION(BlueprintCallable)
		static bool UnTriggerPreload();	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool DemoMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ShowDownloadMessage;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ReadyToRemove;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool PreloadEnabled;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator RotationSave;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CollectiblesEnabled;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* TransportManager;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool EnableTransport;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* PlayerController;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* PlayerChar;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UObject*> ChildActors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* PartnerPortal;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SetLevelVisiblePercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float AnimPlayRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool prepatchready;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool rotationFixed;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HandlePlayerSpawnDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* TransitionTrigger;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* LightingManager;

	//This is wrong
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* PartnerPortalRow;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString PortalText;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString PartnerPortalName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool PreloadActive;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
