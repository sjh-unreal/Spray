// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Spray.h"
#include "SprayGameMode.h"
#include "SprayPlayerController.h"
#include "SprayCharacter.h"

ASprayGameMode::ASprayGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASprayPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}