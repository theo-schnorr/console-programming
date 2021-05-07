// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "GameFramework/Character.h"
#include "Components/InputComponent.h"

#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT3_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	/* FUNCTIONS */
	AMyPlayerController();

	virtual void Tick(float deltaTime) override;

	virtual void SetupInputComponent();

	void MoveForward(float value);

	void MoveRight(float value);

	/* PROPERTIES */
	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	ACharacter* mPlayer;
};
