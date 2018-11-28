// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EQS_ContextsGameMode.h"
#include "EQS_ContextsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEQS_ContextsGameMode::AEQS_ContextsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
