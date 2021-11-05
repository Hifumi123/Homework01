// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTarget.h"
#include "MyGameState.h"

// Sets default values
AMyTarget::AMyTarget()
{
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;
	MeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyTarget::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (OtherActor)
	{
		Destroy();

		OtherActor->Destroy();

		Cast<AMyGameState>(GetWorld()->GetGameState())->Score++;
	}
}

// Called every frame
void AMyTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

