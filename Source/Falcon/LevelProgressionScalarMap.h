// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "EInventoryType.h"
#include "Engine/DataTable.h"
#include "LevelProgressionScalarMap.generated.h"


/**
 * 
 */

USTRUCT(BlueprintType)
struct FLevelProgressionScalarMap : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FLevelProgressionScalarMap()
		: EInventoryType()
		, typeScalarMap()
	{}


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EInventoryType> EInventoryType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float typeScalarMap;
	
};


