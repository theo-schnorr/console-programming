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
}

void AMyPlayerController::MoveForward(float value)
{
	mPlayer->AddMovementInput(mPlayer->GetActorForwardVector(), value);
}

void AMyPlayerController::MoveRight(float value)
{
	mPlayer->AddMovementInput(mPlayer->GetActorRightVector(), value);
}