// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "SV_PaperDisplayWidget.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_PaperDisplayWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "UI")
		void SetImage(UTexture2D* Image);

	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
		UImage* PaperImage;
};
