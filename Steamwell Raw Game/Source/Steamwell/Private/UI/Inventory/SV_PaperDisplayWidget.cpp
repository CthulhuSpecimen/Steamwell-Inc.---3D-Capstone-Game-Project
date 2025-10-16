// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Inventory/SV_PaperDisplayWidget.h"

void USV_PaperDisplayWidget::SetImage(UTexture2D* Image)
{
	if (Image)
	{
		PaperImage->SetBrushFromTexture(Image);
	}
}