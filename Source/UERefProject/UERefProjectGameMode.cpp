// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "UERefProject.h"
#include "UERefProjectGameMode.h"
#include "UERefProjectPlayerController.h"
#include "UERefProjectCharacter.h"

AUERefProjectGameMode::AUERefProjectGameMode(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP)
{
	// use our custom PlayerController class
	PlayerControllerClass = AUERefProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}