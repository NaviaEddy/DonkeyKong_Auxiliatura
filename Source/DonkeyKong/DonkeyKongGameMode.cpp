// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKongGameMode.h"
#include "DonkeyKongCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKongGameMode::ADonkeyKongGameMode()
{

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	//Para que el tick funcione
	PrimaryActorTick.bCanEverTick = true;

	notas = "Este es el BeginPlay con variable";
	puntaje = 10.0f;
	vidas = 3;
	danio = 125.7894;
	verificar = true;
}

void ADonkeyKongGameMode::BeginPlay()
{
	Super::BeginPlay();

	//iniciales para variables
	// %f -> valores flotantes, doubles
	// %s -> valores strings
	// %d -> valores enteros, booleanos

	//Solo se va a mostrar una vez
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, *notas);
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Este es el puntaje: %f"), puntaje));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, FString::Printf(TEXT("Este es el BeginPlay normal")));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, FString::Printf(TEXT("Estas son las vidas: %d"), vidas));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Este es el danio: %f"), danio));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString::Printf(TEXT("Este es la verificacion: %d"), verificar));*/
}

void ADonkeyKongGameMode::Tick(float _tick)
{
	Super::Tick(_tick);

	//Se mostrara en todo momento
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Este es el tick")));
}
