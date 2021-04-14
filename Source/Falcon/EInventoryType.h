// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EInventoryType.generated.h"

UCLASS()
class FALCON_API UInventoryType : public UUserDefinedEnum
{
	GENERATED_BODY()




};

UENUM()
enum EInventoryType
{
	EIT_None,
	EIT_Treasure,
	EIT_BlueGem,
	EIT_RedGem,
	EIT_GreenGem,
	EIT_YellowGem,
	EIT_PurpleGem,
	EIT_S2RedGem,
	EIT_S2GreenGem,
	EIT_S2PurpleGem,
	EIT_S2YellowGem,
	EIT_S2MagentaGem,
	EIT_S1FlightReward,
	EIT_S2FlightReward,
	EIT_TreasureEnd,
	EIT_Egg,
	EIT_Dragon,
	EIT_Orb,
	EIT_Life,
	EIT_LifeOrb,
	EIT_Health,
	EIT_Checkpoint,
	EIT_PushBlock,
	EIT_S2GreenOrb,
	EIT_S2SpiritParticle,
	EIT_LevelVisit,
	EIT_PortalExit,
	EIT_LevelDiode,
	EIT_Talisman,
	EIT_S3Egg,
	EIT_Climbing,
	EIT_HeadBash,
	EIT_Swimming,
	EIT_Superflame,
	EIT_TreasureSpent,
	EIT_FlightResult,
	EIT_SkillPoint,
	EIT_Butterfly,
	EIT_Difficulty,
	EIT_LastLevelPlayed,
	EIT_TimePlayed,
	EIT_S2BlueButterfly,
	EIT_S2Boss,
	EIT_S1Boss,
	EIT_S3Boss,
	EIT_SparxPower_GemCollectRange,
	EIT_SparxPower_GemFinder,
	EIT_SparxPower_ExtraHP,
	EIT_SparxPower_ChestBreaking,
	EIT_ShowOrbs,
	EIT_S3BonusEgg
};