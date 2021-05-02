// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

AMyPlayerController::AMyPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	mPlayer = Cast<ACharacter>(GetPawn());
}

void AMyPlayerController::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Setup gameplay key bindings
	check(InputComponent);

	// Forward/backward movement
	InputComponent->BindAxis("MoveForward", this, &AMyPlayerController::MoveForward);
	// Left right movement
	InputComponent->BindAxis("MoveRight", this, &AMyPlayerController::MoveRight);
	// Turning movement
	//InputComponent->BindAxis("Turn", this, &AMyPlayerController::Turn);
	// Look up/down movement
	//InputComponent->BindAxis("LookUp", this, &AMyPlayerController::LookUp);
}

void AMyPlayerController::MoveForward(float value)
{
	mPlayer->AddMovementInput(mPlayer->GetActorForwardVector(), value);
}

void AMyPlayerController::MoveRight(float value)
{
	mPlayer->AddMovementInput(mPlayer->GetActorRightVector(), value);
}

/*
void AMyPlayerController::Turn(float value)
{
	mPlayer->AddControllerYawInput(value);
}

void AMyPlayerController::LookUp(float value)
{
	mPlayer->AddControllerPitchInput(value * -1);
}
*/