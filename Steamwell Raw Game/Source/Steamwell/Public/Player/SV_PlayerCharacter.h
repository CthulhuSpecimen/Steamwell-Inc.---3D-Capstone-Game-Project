// Fill out your copyright notice in the Description page of Project Settings.
//update
#pragma once

#include "Engine.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "SV_ScenePushable.h"
#include "SV_PushableObject.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

#include "Sound/SoundCue.h"

#include "SV_PlayerCharacter.generated.h"

UCLASS()
class STEAMWELL_API ASV_PlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* MoveAction;
	
	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* PushAction;*/

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* LookAction;

	

	// Reference to the current pushable object
	UPROPERTY()
		ASV_ScenePushable* CurrentPushable;
	UPROPERTY()
		ASV_PushableObject* SelectedPushable;

	
	UFUNCTION()
		void PerformLineTrace();
	


public:
	// Sets default values for this character's properties
	ASV_PlayerCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	// Find closest interactable in sight and range
	void CheckForInteractables();

	float ForwardDir;
	FVector BlockedDir, CheckforPushVector;
	FVector PushDiff;
	FVector tempDist;
	bool isMoving, isBlocked = false;;
	
	float LookInputPitch = 0.0f;




public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pushable)
		float PushForce = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float ForwardMovementValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pushable)
	bool isPushing = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pushable)
		float maxDist = 100.0f;
	ASV_PushableObject* PushableObject = nullptr;
	FVector PushPlayerDist;
	float PushPlayerDistMagn; 
	UFUNCTION()
		void CheckPushableObjects(ASV_PushableObject* SentPushable);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	class USoundCue* PushStartCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	class USoundCue* PushEndCue;

	
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

private:
	UMaterial* GlowMaterial; // yea maybe the character doesn't need a reference to this at all times but I don't want to load it on tick

	class UAIPerceptionStimuliSourceComponent* StimulusSource;

	void SetupStimulusSource();

};
