

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PhasmidCullComponent.generated.h"


UCLASS( ClassGroup=(Phasmid), meta=(BlueprintSpawnableComponent) )
class PHASMID_API UPhasmidCullComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPhasmidCullComponent();

	//UFUNCTION(BlueprintCallable)
	//	static void BindToCull(); //Delegate stuff

	UFUNCTION(BlueprintCallable)
		static void CheckCull();

	UFUNCTION(BlueprintCallable)
		static bool GetGameStateCullReady();

	UFUNCTION(BlueprintCallable)
		static bool GetMeshOffScreen(UObject* MeshComponent);

	UFUNCTION(BlueprintCallable)
		static bool GetOffScreen();

	UFUNCTION(BlueprintCallable)
		static bool IsActorCulled();

	UFUNCTION(BlueprintCallable)
		static bool IsCulled();

	UFUNCTION(BlueprintCallable)
		static void SetActorEnabled(bool bNewEnabled);

	UFUNCTION(BlueprintCallable)
		static void SetAutoUpdateCull(bool bNewEnabled);

	UFUNCTION(BlueprintCallable)
		static void SetCullDistance(float NewCullDistance);

	UFUNCTION(BlueprintCallable)
		static void SetGameStateCullReady(bool bReady);

	UFUNCTION(BlueprintCallable)
		static void UnbindFromCull(UObject* EventOwner);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CollisionCullDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bEnableCollisionCulling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bStillAutoCullWhenVolumeControlled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bAutoCull;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bUseCamAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ReducedMoveInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIgnoreZDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCanActorBeZKilled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCanActorBeDisabledByVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCanActorBeDisabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CullCheckTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CullDistanceSquared;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CullDistance;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
