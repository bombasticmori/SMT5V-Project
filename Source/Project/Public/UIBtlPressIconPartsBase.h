#pragma once
#include "CoreMinimal.h"
#include "E_BTL_PRESSICON_TYPE.h"
#include "E_BTL_SIDE.h"
#include "PressIconEndHalfBlinkMultiCastSignatureDelegate.h"
#include "UIWidgetBase.h"
#include "UIBtlPressIconPartsBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UUIBtlPressIconPartsBase : public UUIWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartDelayRemainSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StartDelayRemainFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsHalfAddEffectPerforming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsDrawIcon;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIconEndHalfBlinkMultiCastSignature OnEndHalfBlink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIconEndHalfBlinkMultiCastSignature OnDrawStarted;
    
    UUIBtlPressIconPartsBase();

    UFUNCTION(BlueprintCallable)
    void SetStartDelayRemainSec(float inSec);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDelayRemainFrame(int32 InFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetSide(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable)
    void SetIconType(E_BTL_PRESSICON_TYPE icon_type);
    
    UFUNCTION(BlueprintCallable)
    bool IsHalfAddEffectPerforming();
    
    UFUNCTION(BlueprintCallable)
    void HideStart(bool isImmediately, bool isIconBreak);
    
    UFUNCTION(BlueprintCallable)
    void HalfAddEffectStart(bool AutoLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_SIDE GetSide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_PRESSICON_TYPE GetIconType();
    
    UFUNCTION(BlueprintCallable)
    void EnableExtendedIcon();
    
    UFUNCTION(BlueprintCallable)
    void DrawStart();
    
    UFUNCTION(BlueprintCallable)
    void CallEndHalfBlinkEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallDrawStartedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NormalIconHideStart(bool isImmediately, bool isIconBreak);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NormalIconDrawStart(bool isExtendedIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_IsChangable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HalfIconHideStart(bool isImmediately, bool isIconBreak);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HalfIconDrawStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HalfIconAddEffectStart(bool AutoLoop);
    
};

