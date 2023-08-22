// Fill out your copyright notice in the Description page of Project Settings.


#include "SpriteFunctions.h"
#include "PlatformerPt2.h" //Replace with your project name
#include "PaperSprite.h"
FVector2D USpriteFunctions::GetSourceSizeImage(UPaperSprite* sprite)
{
	FBoxSphereBounds x = sprite->GetRenderBounds();
	return FVector2D(x.BoxExtent.X, x.BoxExtent.Z);
}