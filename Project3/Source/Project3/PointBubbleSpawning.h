// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PointBubbleSpawning.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT3_API UPointBubbleSpawning : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure)
	static FTransform RandomizeSpawnLocation(AActor* minActor, AActor* maxActor);

	UFUNCTION(BlueprintCallable)
	static TSubclassOf<AActor> RandomizeActor(TSubclassOf<AActor> actorOne, TSubclassOf<AActor> actorTwo, TSubclassOf<AActor> actorThree, TSubclassOf<AActor> actorFour);
};
