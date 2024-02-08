// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/CustomMovementPawn.h"
#include "CustomMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
ACustomMovementPawn::ACustomMovementPawn()
{
	//TODO: Add the Simple Movement Component to this Pawn
	//CREATE the SimpleMovementComponent
	
	//ASSIGN the RootComponent to the SimpleMovementComponent->UpdatedComponent variable
		
}

void ACustomMovementPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ACustomMovementPawn::MoveForward(float Amount)
{
	if (!Controller)
		return;

	//TODO: Implement the Move Forward Logic, what is being passed in and how is this pawns movement logic different from its super class?
	/*
	* Here we bound Rotation with our Controller rotation
	*/
	//Get The Rotation from the Controller and ASSIGN it to a FRotator called Rotation, Controller has a function that returns the Controllers rotation
	

	/*
	* Here we declare we are only changing Yaw rotation, other ones are stable as 0.0f
	*/
	//DECLARE a FRotator called YawRotation and Initialize its pitch=0, roll=0 and the yaw=the controller rotation's yaw
	
	
	/*
	* EAxis::X -> is making us move at the direction X!
	*/
	//DECLARE a FVector Direction and assign it to FRotationMatrix(??).GetUnitAxis(??);
	

	/*
	* Apply the forward and back movement
	*/
	//IF the SimpleMovementComponent is not null
	
		//Add Direction * Amount to the SimpleMovementComponent's Input Vector (There is a function that does this)
	
	//ENDIF
}

void ACustomMovementPawn::MoveRight(float Amount)
{
	if (!Controller)
		return;

	//TODO: Implement the Move Right Logic, what is being passed in and how is this pawns movement logic different from its super class. Why isn't there a Tick() function in this Pawn?
	/*
	* Here we bound Rotation with our Controller rotation
	*/
	//Get The Rotation from the Controller and ASSIGN it to a FRotator called Rotation, Controller has a function that returns the Controllers rotation
	

	/*
	* Here we declared we are only changing Yaw rotation, other ones are stable as 0.0f
	*/
	//DECLARE a FRotator called YawRotation and Initialize its pitch=0, roll=0 and the yaw=the controller rotation's yaw
	

	/*
	* EAxis::Y -> is making us move at the direction Y!
	*/
	//DECLARE a FVector Direction and assign it to FRotationMatrix(??).GetUnitAxis(??);
	

	/*
	* Apply the right and left movement
	*/
	//IF the SimpleMovementComponent is not null
	
		//Add Direction * Amount to the SimpleMovementComponent's Input Vector (There is a function that does this)
	
	//ENDIF

}


