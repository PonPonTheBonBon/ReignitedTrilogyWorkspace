// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ESkillPoint.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API USkillPoint : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum ESkillPoint
{
	ESPT_Invalid,
	ESPT_S1,
	ESPT_S2,
	ESPT_S3
};