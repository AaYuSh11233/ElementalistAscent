#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ElementalUserWidget.generated.h"

UCLASS()
class ELEMENTALASCENT_API UElementalUserWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintImplementableEvent, Category="UI")
    void UpdateXP(int32 CurrentXP, int32 XPToNext);

    UFUNCTION(BlueprintImplementableEvent, Category="UI")
    void UpdateHealth(float Current, float Max);

    UFUNCTION(BlueprintImplementableEvent, Category="UI")
    void UpdateElementalPower(const FString& PowerName);
};