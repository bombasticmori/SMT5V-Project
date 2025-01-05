#pragma once
#include "CoreMinimal.h"
#include "E_BTL_PRESS_TYPE.h"
#include "E_BTL_SIDE.h"
#include "PressIcon.h"
#include "UIWidgetBase.h"
#include "UIBtlPressIconBase.generated.h"

class UUIBtlPressIconPartsBase;

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UUIBtlPressIconBase : public UUIWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUIBtlPressIconPartsBase*> m_PressIconParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIcon m_DrawPressIconNum;
    
public:
    UUIBtlPressIconBase();

    UFUNCTION(BlueprintCallable)
    void SlideOutStart();
    
    UFUNCTION(BlueprintCallable)
    void SlideInStart();
    
    UFUNCTION(BlueprintCallable)
    void SetSide(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable)
    void OutStart(bool isIconBreak);
    
    UFUNCTION(BlueprintCallable)
    void InStart();
    
    UFUNCTION(BlueprintCallable)
    FPressIcon GetAddDrawPressIconNum(FPressIcon root_press_icon);
    
    UFUNCTION(BlueprintCallable)
    FPressIcon CalcDrawPressIconNum(FPressIcon root_press_icon, bool is_apply);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SlideOutStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SlideInStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OutStart(bool isIconBreak);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AddDrawPressIcon(FPressIcon add_press_icon, E_BTL_PRESS_TYPE pressType);
    
    UFUNCTION(BlueprintCallable)
    void AddDrawPressIcon(FPressIcon add_press_icon, E_BTL_PRESS_TYPE pressType);
    
};

