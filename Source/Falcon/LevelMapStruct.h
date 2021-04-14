// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "LevelMapStruct.generated.h"



/**
 * 
 */
USTRUCT(BlueprintType)
struct FLevelMapStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FLevelMapStruct()
		: excludeFromGameProgressionCompletionScalar(0)
		, excludeFromGameProgressionCompletion(0)
		, flightLevel(false)
		, bossLevel(false)
		, DisplayName("")
		, homeLevel("")
		, LevelPath("")
	{}

	/** The 'Name' column is the same as the XP Level */

	/** XP to get to the given level from the previous level */

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	TArray<FParticleStruct> progressionMap;
		
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float excludeFromGameProgressionCompletionScalar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool excludeFromGameProgressionCompletion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool flightLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bossLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName homeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString LevelPath;

};


