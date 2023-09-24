// Fill out your copyright notice in the Description page of Project Settings.


#include "WymCharacter.h"

// Sets default values
AWymCharacter::AWymCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWymCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWymCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWymCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

