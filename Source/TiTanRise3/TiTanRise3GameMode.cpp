// Copyright Epic Games, Inc. All Rights Reserved.

#include "TiTanRise3GameMode.h"
#include "TiTanRise3HUD.h"
#include "TiTanRise3Character.h"
#include "UObject/ConstructorHelpers.h"

ATiTanRise3GameMode::ATiTanRise3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATiTanRise3HUD::StaticClass();
}
