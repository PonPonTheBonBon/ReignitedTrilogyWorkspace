// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "MtDStyle.h"

class FMtDCommands : public TCommands<FMtDCommands>
{
public:

	FMtDCommands()
		: TCommands<FMtDCommands>(TEXT("MtD"), NSLOCTEXT("Contexts", "MtD", "MtD Plugin"), NAME_None, FMtDStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
