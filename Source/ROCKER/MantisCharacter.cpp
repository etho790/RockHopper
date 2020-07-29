// Fill out your copyright notice in the Description page of Project Settings.


#include "MantisCharacter.h"

// Sets default values
AMantisCharacter::AMantisCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMantisCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMantisCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMantisCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

