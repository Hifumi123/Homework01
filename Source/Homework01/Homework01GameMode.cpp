// Copyright Epic Games, Inc. All Rights Reserved.

#include "Homework01GameMode.h"
#include "Homework01HUD.h"
#include "Homework01Character.h"
#include "UObject/ConstructorHelpers.h"

AHomework01GameMode::AHomework01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHomework01HUD::StaticClass();
}
