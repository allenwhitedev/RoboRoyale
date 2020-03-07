// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RoboRoyaleGameMode.h"
#include "RoboRoyaleCharacter.h"

ARoboRoyaleGameMode::ARoboRoyaleGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ARoboRoyaleCharacter::StaticClass();	
}
