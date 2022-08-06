// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterKillerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"

// Sets default values
AMonsterKillerCharacter::AMonsterKillerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(40.0f, 95.0f);

	//PlaceHolder
	TurnRate = 45.0f;
	LookUpRate = 45.0f;

	//Create the Camera
	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCamera->SetupAttachment(GetCapsuleComponent());
	FirstPersonCamera->AddRelativeLocation(FVector(-39.5f, 1.75f, 64.0f));
	FirstPersonCamera->bUsePawnControlRotation = true;

	//Create the hands mesh that can only be seen by the owner AKA:Current Player (Good for Multiplayer)
	HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands Viewport"));
	HandMesh->SetOnlyOwnerSee(true);
	HandMesh->SetupAttachment(FirstPersonCamera);
	HandMesh->bCastDynamicShadow = false;
	HandMesh->CastShadow = false;
	HandMesh->AddRelativeRotation(FRotator(1.9f, 19.19f, 5.2f));
	HandMesh->AddRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	//Create the gun mesh that can only be seen by the owner AKA:Current Player (Good for Multiplayer)
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun Viewport"));
	GunMesh->SetOnlyOwnerSee(true);
	HandMesh->bCastDynamicShadow = false;
	HandMesh->CastShadow = false;

	//Create muzzle flash
	MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle"));
	MuzzleLocation->SetupAttachment(GunMesh);
	MuzzleLocation->AddRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	//Gun Offset
	GunOffset = FVector(100.0f, 0.0f, 10.0f);
}

// Called when the game starts or when spawned
void AMonsterKillerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	GunMesh->AttachToComponent(HandMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("GripPoint"));
}

// Called every frame
void AMonsterKillerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMonsterKillerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMonsterKillerCharacter::OnFire()
{
}

void AMonsterKillerCharacter::MoveFoward(float Value)
{
}

void AMonsterKillerCharacter::MoveRight(float Value)
{
}

void AMonsterKillerCharacter::TurnAtRate(float Rate)
{
}

void AMonsterKillerCharacter::LookAtRate(float Rate)
{
}

