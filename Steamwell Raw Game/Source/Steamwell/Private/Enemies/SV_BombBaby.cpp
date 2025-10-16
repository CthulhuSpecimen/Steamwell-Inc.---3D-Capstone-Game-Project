// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies/SV_BombBaby.h"
#include "Sound/SoundCue.h"
#include "GameManager/SV_GameModeBase.h"
#include "Player/SV_PlayerCharacter.h"
// Sets default values
ASV_BombBaby::ASV_BombBaby()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASV_BombBaby::BeginPlay()
{
	Super::BeginPlay();
	if (ASV_GameModeBase* GameMode = Cast<ASV_GameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		GameMode->OnBombBabyStatusUpdatedDelegate.AddUObject(this, &ASV_BombBaby::UpdateStatus);
	}
}

// Called every frame
void ASV_BombBaby::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float Countdown = GetWorldTimerManager().GetTimerElapsed(ExplosionTimerHandle);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(10, 1.f, FColor::Blue, FString::Printf(TEXT("Time since bomb planted: %f"), Countdown));
	}

	int32 CurrentSecond = FMath::FloorToInt(Countdown);
	if (CurrentSecond != FMath::FloorToInt(LastPlayedSecond))
	{
		LastPlayedSecond = Countdown;

		if (BombBabyTick) // Ensure the sound cue is assigned
		{
			UGameplayStatics::PlaySoundAtLocation(this, BombBabyTick, GetActorLocation());
		}
	}
}

void ASV_BombBaby::UpdateStatus(int32 ID, bool bIsActivated)
{
	if (Identifier == ID)
	{
		bIsActivated ? Activate() : Defuse();
	}
	
}
// Sets a timer to call the Explode function after TimeUntilExplosion seconds
void ASV_BombBaby::Activate()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("The Bomb has been planted")));
	GetWorldTimerManager().SetTimer(ExplosionTimerHandle, this, &ASV_BombBaby::Explode, TimeUntilExplosion);
	if (BombBabyStart) // Ensure the sound cue is assigned
	{
		UGameplayStatics::PlaySoundAtLocation(this, BombBabyStart, GetActorLocation());
	}
}

// Cancels the timer handle so Explode won't be called
void ASV_BombBaby::Defuse()
{
	if (GetWorldTimerManager().IsTimerActive(ExplosionTimerHandle))
	{
		GetWorldTimerManager().ClearTimer(ExplosionTimerHandle);
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Emerald, FString::Printf(TEXT("Bomb Defused")));
		OnDefuse();

		if (BombBabyComplete) // Ensure the sound cue is assigned
		{
			UGameplayStatics::PlaySoundAtLocation(this, BombBabyComplete, GetActorLocation());
		}
	}
	
}

void ASV_BombBaby::Explode()
{
	OnExplode();
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Turquoise, FString::Printf(TEXT("BOOM")));
	FVector Origin = GetActorLocation();
	if (ASV_PlayerCharacter* PlayerCharacter = Cast<ASV_PlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
	{
		if (BombBabyExplode) // Ensure the sound cue is assigned
		{
			UGameplayStatics::PlaySoundAtLocation(this, BombBabyExplode, GetActorLocation());
		}
		PlayerCharacter->GetMesh()->SetSimulatePhysics(true);
		PlayerCharacter->GetMesh()->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
		PlayerCharacter->GetCharacterMovement()->StopMovementImmediately();
		PlayerCharacter->GetCharacterMovement()->DisableMovement();


		FVector PushDirection = (this->GetActorLocation() - Origin).GetSafeNormal();
		FVector NewLocation = this->GetActorLocation() + (PushDirection * 50000);

		PlayerCharacter->GetMesh()->AddImpulse(PushDirection * 50000);
		GetWorldTimerManager().SetTimer(ResetLevelTimerHandle, this, &ASV_BombBaby::RestartLevel, 3.f);
	}
	

	// Kill character
	// Respawn character
}

void ASV_BombBaby::RestartLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), "/Game/Levels/Level_1");
}