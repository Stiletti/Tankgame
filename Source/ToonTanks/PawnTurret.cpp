// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"


void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireConditions, FireRate, true);
}

void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ...
}

APawnTurret::APawnTurret()
{

}

void APawnTurret::CheckFireConditions()
{
	UE_LOG(LogTemp, Warning, TEXT("Fire Fire Fire !"));
}