#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ElementalHUD.generated.h"

UCLASS()
class ELEMENTALASCENT_API AElementalHUD : public AHUD
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

protected:
    UPROPERTY(EditDefaultsOnly, Category="UI")
    TSubclassOf<class UUserWidget> HUDWidgetClass;

    UPROPERTY()
    class UElementalUserWidget* HUDWidget;
};