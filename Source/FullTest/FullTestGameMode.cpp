// Copyright Epic Games, Inc. All Rights Reserved.

#include "FullTestGameMode.h"
#include "FullTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFullTestGameMode::AFullTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
