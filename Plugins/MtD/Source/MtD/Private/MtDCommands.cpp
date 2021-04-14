// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MtDCommands.h"

#define LOCTEXT_NAMESPACE "FMtDModule"

void FMtDCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "Open Cooked Folder", "Open Cooked Folder", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
