// Fill out your copyright notice in the Description page of Project Settings.


#include "Detail.h"

// Sets default values
ADetail::ADetail()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
  
    Details = CreateDefaultSubobject<UTextRenderComponent>(TEXT("DetailsText"));
    Details->SetupAttachment(RootComponent);
    TextSize = 30.0f;
    TextColor = FColor::White;
    EHTA = EHorizTextAligment::EHTA_Left;
    EVTA = EVerticalTextAligment::EVRTA_TextCenter;
}

// Called when the game starts or when spawned
void ADetail::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADetail::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ADetail::TextDetail()
{
    if (Details)
    {

       


        Details->SetWorldSize(TextSize);


        Details->SetTextRenderColor(TextColor);


        Details->SetHorizontalAlignment(EHTA);


        Details->SetVerticalAlignment(EVTA);
    }
}

