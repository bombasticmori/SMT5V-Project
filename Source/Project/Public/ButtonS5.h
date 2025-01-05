#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "Components/Button.h"
#include "ButtonClickEventS5Delegate.h"
#include "ButtonDragDrppEventS5Delegate.h"
#include "ButtonSimpleEventS5Delegate.h"
#include "ButtonS5.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UButtonS5 : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusiveDragMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonClickEventS5 OnClickedS5;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonSimpleEventS5 OnSelectedS5;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonDragDrppEventS5 OnDraggedS5;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonDragDrppEventS5 OnDroppedS5;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonSimpleEventS5 OnDropCanceledS5;
    
    UButtonS5();

    UFUNCTION(BlueprintCallable)
    static void SetButtonS5DebugColor(bool bEnableDebugColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseDragging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetButtonS5ExclusiveDragging();
    
};

