// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS(minimalapi)
class AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMyGameMode();

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Game Mode Setting")
		int TargetScore;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Game Mode State")
		int AmountOfBulletReference;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
		void OnVictory();

	UFUNCTION(BlueprintImplementableEvent)
		void OnDefeat();
};
