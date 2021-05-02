

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "FalconMaterialTransitionStruct.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconMaterialTransition : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};



USTRUCT(BlueprintType)
struct FalconMaterialTransitionStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	TArray<FParticleStruct> progressionMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bReverse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* ParameterValueTimelineCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ParameterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaterialIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName MaterialComponent;

};


