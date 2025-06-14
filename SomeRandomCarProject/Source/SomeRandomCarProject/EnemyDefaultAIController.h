// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h" // Include the PathFollowingComponent header for path following functionality
#include "EnemyDefaultAIController.generated.h"


UCLASS()
class SOMERANDOMCARPROJECT_API AEnemyDefaultAIController : public AAIController
{
	GENERATED_BODY()

public:

	AEnemyDefaultAIController(); // Constructor for the AI controller
	virtual void BeginPlay() override; // Override BeginPlay function


private:

	void MoveToPlayer(); // Function to move the enemy AI towards the player pawn

	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;



protected:

	APawn* playerPawn; // Create a ariable to hold the player pawn reference
	FTimerHandle MoveTimerHandle; // Timer handle for periodic movement updates
	
};
