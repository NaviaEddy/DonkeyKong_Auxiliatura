// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKongGameMode.generated.h"

UCLASS(minimalapi)
class ADonkeyKongGameMode : public AGameModeBase
{
	GENERATED_BODY()

//Niveles de acceso de una clase
public: //Cualquier clase puede acceder a este metodo

	ADonkeyKongGameMode(); //Constructor

protected: //Solo la clase o clases hijas pueden acceder a este metodo

	virtual void BeginPlay() override; //Cuando el juego se inicia

public: //Solo la clase que lo define

	virtual void Tick(float _tick) override; //Actualizacion constante del juego

	FString notas;
	float puntaje;
	int vidas;
	double danio;
	bool verificar;
};



