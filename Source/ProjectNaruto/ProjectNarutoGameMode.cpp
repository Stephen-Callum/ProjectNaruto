// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectNarutoGameMode.h"
#include "ProjectNarutoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectNarutoGameMode::AProjectNarutoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
