// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SimplePawn.h"

DEFINE_LOG_CATEGORY_STATIC(LogMyPlayerController, All, All)

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//TODO: Bind the button press action to switch pawns. Can the pawns input bindings be moved here?
	if (InputComponent)
	{
		//BIND Action "ChangePawn", On the key Event Pressed to this objects ChangePawn() Function
	
	}
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//TODO: Get all actors of type ASimplePawn that are in the level
	//GET all actors of type ASimplePawn in the level (Look up the function UGameplayStatics::GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors)). You can pass ASimplePawn::StaticClass() into the TSubclassOf<AActor> ActorClass argument
	//What header file is involved in using this static helper function
	
}

void AMyPlayerController::ChangePawn()
{
	//TODO: Implement the logic to switch pawns in the Pawns TArray
	//IF the number of pawns in the Pawns array is less than 1
	
		//RETURN
	
	//ENDIF

	//Get the CurrentPawn from the Array of Pawns at CurrentPawnIndex. The Pawns TArray holds Actors so you will have to Cast<T>(pass in actor) It
	
	//SET the CurrentPawnIndex to the Next Pawn in the Pawns array, It will be used to change the pawn next time this action is performed
	
	
	//IF the CurrentPawn is null
	
		//RETURN
	
	//ENDIF

	//POSSESS the CurrentPawn
	

	UE_LOG(LogMyPlayerController, Warning, TEXT("Change Pawn"))
}
