// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "MyGameState.h"

void UMyUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	PlayerScore = Cast<AMyGameState>(GetWorld()->GetGameState())->Score;
}

int UMyUserWidget::GetPlayerScore()
{
	return PlayerScore;
}
