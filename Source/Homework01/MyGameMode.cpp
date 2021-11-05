// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Homework01HUD.h"
#include "MyGameState.h"
#include "MyCharacter.h"

AMyGameMode::AMyGameMode()
	: Super()
{
	// use our custom HUD class
	HUDClass = AHomework01HUD::StaticClass();

	PrimaryActorTick.bCanEverTick = true;
}

void AMyGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AMyGameState* MGS = GetGameState<AMyGameState>();

	if (MGS && MGS->Score >= TargetScore)
	{
		OnVictory();
	}

	AMyCharacter* MC = Cast<AMyCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	if (MC && MC->AmountOfBullet <= 0 && AmountOfBulletReference <= 0 && MGS && MGS->Score < TargetScore)
	{
		OnDefeat();
	}
}
