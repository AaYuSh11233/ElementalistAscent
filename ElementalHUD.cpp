#include "ElementalHUD.h"
#include "Blueprint/UserWidget.h"
#include "ElementalUserWidget.h"
#include "UObject/ConstructorHelpers.h"

void AElementalHUD::BeginPlay()
{
    Super::BeginPlay();

    if (HUDWidgetClass)
    {
        HUDWidget = CreateWidget<UElementalUserWidget>(GetWorld(), HUDWidgetClass);
        if (HUDWidget)
        {
            HUDWidget->AddToViewport();
        }
    }
}