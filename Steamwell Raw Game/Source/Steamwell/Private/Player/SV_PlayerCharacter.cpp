// Fill o\\ut your copyright notice in the Description page of Project Settings.


#include "Player/SV_PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "Engine/GameEngine.h"
#include "GameManager/BP_SaveGame.h"
#include "GameManager/SV_GameInstance.h"
#include "SV_PushableObject.h"
#include "EnhancedInputSubsystems.h"
#include "SV_ScenePushable.h"
#include "SV_InstantPushable.h"

#include "Kismet/GameplayStatics.h"

#include "Items/SV_InteractableBase.h"
#include "Items/SV_InventoryItem.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Sight.h"

#include "Player/SV_PlayerController.h"


// Sets default values
ASV_PlayerCharacter::ASV_PlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Ensure CameraBoom is created
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	if (CameraBoom)
	{
		CameraBoom->SetupAttachment(RootComponent);
		CameraBoom->TargetArmLength = 250.0f;
		CameraBoom->SocketOffset = FVector(0.0f, 50.0f, 20.0f); // Move slightly to the right
		CameraBoom->SetRelativeRotation(FRotator(-10.f, 0.f, 0.f)); // Less tilt
		CameraBoom->bUsePawnControlRotation = true;
		CameraBoom->bDoCollisionTest = true;


		if (CameraBoom)
		{
			CameraBoom->bEnableCameraLag = true; // smooth follow
			CameraBoom->CameraLagSpeed = 5.0f;  // Adjust for desired smoothness
			CameraBoom->bEnableCameraRotationLag = false;
			CameraBoom->CameraRotationLagSpeed = 10.0f; // Smooth rotation


		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("CameraBoom is null in ASV_PlayerCharacter constructor!"));
		}


		// Ensure FollowCamera is created
		FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
		if (FollowCamera)
		{
			FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
			FollowCamera->bUsePawnControlRotation = false;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create FollowCamera!"));
		}

	}
	SetupStimulusSource();
}

// Called when the game starts or when spawned
void ASV_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Set Generic Team ID for AI Perception(e.g., Neutral)
		// SetGenericTeamId(FGenericTeamId(0)); // Or another ID if you have teams

	USV_GameInstance* GameInstance = Cast<USV_GameInstance>(GetGameInstance());
	if (GameInstance)
	{
		GameInstance->LoadGame(this);
	}
	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	GlowMaterial = LoadObject<UMaterial>(NULL, TEXT("/Game/Materials/Outline_Mat.Outline_Mat"));
}

void ASV_PlayerCharacter::SetupStimulusSource()
{
	StimulusSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimulus"));
	if (StimulusSource)
	{
		StimulusSource->RegisterForSense(TSubclassOf<UAISense_Sight>());
		StimulusSource->RegisterWithPerceptionSystem();
	}
}


void ASV_PlayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {

		//Jumping

		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving



		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASV_PlayerCharacter::Move);

		//EnhancedInputComponent->BindAction(PushAction, ETriggerEvent::Completed, this, &ASV_PlayerCharacter::CheckPushableObjects);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASV_PlayerCharacter::Look);


	}

}
void ASV_PlayerCharacter::PerformLineTrace()
{

}

void ASV_PlayerCharacter::CheckPushableObjects(ASV_PushableObject* SentPushable)
{
	
	FVector MoveDirection = GetActorForwardVector();
	FVector Start = GetActorLocation();
	FVector End = Start + (MoveDirection * 300.f);  // Short range to check directly in front

	FHitResult Hit;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);
	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1.0f, 0, 2.0f);

	if (!isPushing) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("PUSHING ON"));
		PushableObject = SentPushable;
		/*if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_PhysicsBody, CollisionParams))
		{
			PushableObject = Cast<ASV_PushableObject>(Hit.GetActor());*/
			if (PushableObject && !PushableObject->isPlaced)

			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("IDENTIFIED OBJECT"));
				isPushing = true;
				if (PushStartCue)
				{
					UGameplayStatics::PlaySoundAtLocation(this, PushStartCue, GetActorLocation());
				}
				PushableObject->MeshComponent->SetCollisionProfileName(TEXT("PushMode"));
				PushPlayerDist = PushableObject->GetActorLocation() - GetActorLocation();
				PushPlayerDistMagn = FVector::Dist(PushableObject->GetActorLocation(), GetActorLocation());
			
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("PUSHING OFF"));
		PushableObject->MeshComponent->SetCollisionProfileName(TEXT("PushableCollision"));
		isPushing = false;
		//this is where switch out of pushable mode is, this is voluntarily placing down an object
		//Put box drop sound here
		if (PushEndCue)
		{
			UGameplayStatics::PlaySoundAtLocation(this, PushEndCue, GetActorLocation());
		}

	}
}
//update


void ASV_PlayerCharacter::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	//CheckPushableObjects();
	CheckForInteractables();
	FVector ForwardVector = GetActorForwardVector();  // Character's forward direction
	FVector Velocity = GetVelocity();  // Character's movement direction

	// Normalize the velocity to prevent speed from affecting the result
	ForwardMovementValue = FVector::DotProduct(ForwardVector, Velocity);


	FVector CameraStart = GetActorLocation();
	FVector CameraEnd = CameraStart - GetActorForwardVector() * CameraBoom->TargetArmLength;

	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	if (isPushing) {
		PushableObject->SetActorLocation(GetActorLocation() + PushPlayerDist, true);
		if (!PushableObject->isPlaced) {
			float Number = FVector::Dist(PushableObject->GetActorLocation(), GetActorLocation());
			GEngine->AddOnScreenDebugMessage(3, 0.1f, FColor::Cyan, FString::Printf(TEXT("Initial Distance: %d"), PushPlayerDistMagn));
			GEngine->AddOnScreenDebugMessage(4, 0.1f, FColor::Yellow, FString::Printf(TEXT("Actual Distance: %d"), Number));
			//put grinding push noise right here (called multiple times)
			if (Number != PushPlayerDistMagn) {
				//isPushing = false;
				//PushableObject->MeshComponent->SetCollisionProfileName(TEXT("PushableCollision"));
				SetActorLocation(PushableObject->GetActorLocation() - PushPlayerDist);
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("PUSHING OFF"));
				//this is unvoluntarily/running into another object and switching out of the mode 
			}
		}
		else {
			isPushing = false;
		}
	}

	// Adjust camera tilt dynamically based on looking direction (e.g., when looking up for enemies)
	FRotator NewRotation = CameraBoom->GetRelativeRotation();
	NewRotation.Pitch = FMath::Lerp(NewRotation.Pitch, LookInputPitch, DeltaTime * 10.0f); // Smooth look-up adjustments
	CameraBoom->SetRelativeRotation(NewRotation);
}


void ASV_PlayerCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	ForwardDir = MovementVector.X;
	if (ForwardDir > 0) {
		isMoving = true;
	}
	else {
		isMoving = false;
	}

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		//if (!isPushing) {
			AddMovementInput(ForwardDirection, MovementVector.Y);
			AddMovementInput(RightDirection, MovementVector.X);
	//	}
		/*else {
			AddMovementInput(ForwardDirection, MovementVector.Y * .33f);
			AddMovementInput(RightDirection, MovementVector.X * .33f);

		}*/
	}
}

void ASV_PlayerCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		
			float Sensitivity = 1.5f; // Adjust sensitivity if needed
			float MinPitch = -45.0f; // Prevent camera from looking too high
			float MaxPitch = 30.0f;  // Prevent looking too low

			// Get current control rotation
			FRotator CurrentRotation = Controller->GetControlRotation();

			// Apply yaw (horizontal movement)
			float NewYaw = CurrentRotation.Yaw + LookAxisVector.X * Sensitivity;

			// Apply pitch (vertical movement) with clamping
			float NewPitch = FMath::Clamp(CurrentRotation.Pitch + LookAxisVector.Y * Sensitivity, MinPitch, MaxPitch);

			// Set the new rotation
			Controller->SetControlRotation(FRotator(NewPitch, NewYaw, 0.0f));
		
	}
}

// Sets the PlayerController's CurrentInteractable to a Pickup from a Line Trace
void ASV_PlayerCharacter::CheckForInteractables()
{
	FHitResult HitResult;

	FVector PlayerCheckLocation = GetActorLocation();

	// Define the collision shape (box) around the player
	FCollisionShape PlayerCollisionShape = FCollisionShape::MakeBox(FVector(75, 75, 90)); // Adjust size if needed
	FCollisionQueryParams PlayerCollisionParams;
	PlayerCollisionParams.AddIgnoredActor(this); // Ignore the player itself

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	if (ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(GetController()))
	{

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Check Interactables is Running"));
		// DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::White, false, 0.1f, 0, 5);
		if (GetWorld()->SweepSingleByChannel(HitResult, PlayerCheckLocation,
			PlayerCheckLocation, // Static sweep (no movement)
			FQuat::Identity,
			ECC_PhysicsBody, // Adjust collision channel if needed
			PlayerCollisionShape,
			PlayerCollisionParams))
		{
			
			if (ASV_InteractableBase* Interactable = Cast<ASV_InteractableBase>(HitResult.GetActor()))
			{
				// Turn off other interactable when switching to a new one
				if (PlayerController->CurrentInteractable && PlayerController->CurrentInteractable != Interactable)
				{
					if (UStaticMeshComponent* PrevStaticMesh = Cast<UStaticMeshComponent>(PlayerController->CurrentInteractable->GetComponentByClass(UStaticMeshComponent::StaticClass())))
					{
						PrevStaticMesh->SetOverlayMaterial(nullptr);
					}
				}
				if (UStaticMeshComponent* NewStaticMesh = Cast<UStaticMeshComponent>(Interactable->GetComponentByClass(UStaticMeshComponent::StaticClass())))
				{
					NewStaticMesh->SetOverlayMaterial(GlowMaterial);
				}
				PlayerController->CurrentInteractable = Interactable;
				return;
			}
		}
		else {
			// Turn off interactable when not near it
			if (PlayerController->CurrentInteractable)
			{
				if (UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(PlayerController->CurrentInteractable->GetComponentByClass(UStaticMeshComponent::StaticClass())))
				{
					if (StaticMeshComponent->GetOverlayMaterial())
					{
						StaticMeshComponent->SetOverlayMaterial(nullptr);
					}
				}
			}
			PlayerController->CurrentInteractable = nullptr;
		}
	}

}



