#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPauseUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickEvenWhenPaused;
    
    UPauseUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    bool GetTickableWhenPaused();
    
};

