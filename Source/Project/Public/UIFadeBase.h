#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "E_UI_FADE_STATE.h"
#include "OnEventDispatherEndFadeInDelegate.h"
#include "OnEventDispatherEndFadeOutDelegate.h"
#include "UIFadeBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UUIFadeBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventDispatherEndFadeIn OnEventDispather_EndFadeIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventDispatherEndFadeOut OnEventDispather_EndFadeOut;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColor m_FadeColor;
    
public:
    UUIFadeBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFadePaused(bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeColor(FColor col);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFadePaused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFadeAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    E_UI_FADE_STATE GetFadeState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetFadeColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FadeOut(FColor Color, float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FadeIn(FColor Color, float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FadeClear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallDebug();
    
};

