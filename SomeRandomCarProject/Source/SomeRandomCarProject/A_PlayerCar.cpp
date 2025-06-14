// Fill out your copyright notice in the Description page of Project Settings.


#include "A_PlayerCar.h"
#include "Components/InputComponent.h"
#include "ChaosWheeledVehicleMovementComponent.h"

AA_PlayerCar::AA_PlayerCar()
{
	
}


void AA_PlayerCar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind "MoveForward" axis to the MoveForward function
    PlayerInputComponent->BindAxis("MoveForward", this, &AA_PlayerCar::MoveForward);
}

void AA_PlayerCar::MoveForward(float Value)  
{  
    // Apply throttle input  
    if (UChaosVehicleMovementComponent* Movement = GetVehicleMovementComponent())  
    {  
        if (UChaosWheeledVehicleMovementComponent* WheeledMovement = Cast<UChaosWheeledVehicleMovementComponent>(Movement))  
        {  
            WheeledMovement->SetThrottleInput(Value);  
        }  
    }  
}





