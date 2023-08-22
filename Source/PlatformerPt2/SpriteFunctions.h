// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PaperSprite.h"
#include "SpriteFunctions.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMERPT2_API USpriteFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Source Size", Keywords = "Source Texture Sprite"), Category = Custom) //Here you can change the keywords, name and category
		static FVector2D GetSourceSizeImage(UPaperSprite* sprite);
};
