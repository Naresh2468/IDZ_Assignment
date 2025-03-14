// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "Detail.generated.h"

UCLASS()
class ASSIGNMENT_API ADetail : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADetail();

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Details")
	UTextRenderComponent* Details; // Note: Fixed typo from "Detials" to "Details"
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Details")
	float TextSize;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Details")
	FColor TextColor;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Details")
	TEnumAsByte<EHorizTextAligment> EHTA;

	// Vertical alignment enum, editable in Blueprints per instance
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Details")
	TEnumAsByte<EVerticalTextAligment> EVTA;

	UFUNCTION(BlueprintCallable)
	void TextDetail();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
