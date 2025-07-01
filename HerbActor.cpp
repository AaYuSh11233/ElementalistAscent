#include "HerbActor.h"
#include "PlayerHero.h"

AHerbActor::AHerbActor()
{
    PrimaryActorTick.bCanEverTick = false;
    SetActorEnableCollision(true);
}

void AHerbActor::BeginPlay()
{
    Super::BeginPlay();
}

void AHerbActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
    if (APlayerHero* Player = Cast<APlayerHero>(OtherActor))
    {
        Player->Inventory->AddItem("Herb", 1);
        Player->GainXP(10);
        Destroy();
    }
}