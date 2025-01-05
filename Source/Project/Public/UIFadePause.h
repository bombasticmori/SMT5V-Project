#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UIFadePause.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UUIFadePause : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
    UUIFadePause();

    UFUNCTION(BlueprintCallable)
    void SetIsPaused(bool sw);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPaused();
    
};

