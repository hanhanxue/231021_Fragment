// Fill out your copyright notice in the Description page of Project Settings.


#include "VRCPPPawn.h"

// Sets default values
AVRCPPPawn::AVRCPPPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRTrackingCenter = CreateDefaultSubobject<USceneComponent>(TEXT("VRTrackingCenter"));
	Head = CreateDefaultSubobject<UCameraComponent>(TEXT("Head"));
	outputText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("outputText"));

	LeftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftController"));
	raygun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("raygun"));
	LeftCone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftCone"));

	RightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightController"));
	RightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightMesh"));

	Head->SetupAttachment(VRTrackingCenter);
	outputText->SetupAttachment(Head);

	LeftController->SetupAttachment(VRTrackingCenter);
	raygun->SetupAttachment(LeftController);
	LeftCone->SetupAttachment(raygun);

	RightController->SetupAttachment(VRTrackingCenter);
	RightMesh->SetupAttachment(RightController);




}

// Called when the game starts or when spawned
void AVRCPPPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AVRCPPPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRCPPPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

