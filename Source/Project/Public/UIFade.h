#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_UI_FADE_STATE.h"
#include "UIFade.generated.h"

class UUIFadeBase;

UCLASS(Blueprintable)
class PROJECT_API UUIFade : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIFade();

    UFUNCTION(BlueprintCallable)
    static bool SetFadePaused(bool sw);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFadePaused();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFadeOut();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFadeIn();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFadeAnim();
    
    UFUNCTION(BlueprintCallable)
    static E_UI_FADE_STATE GetFadeState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUIFadeBase* GetBP_ScreenFade();
    
    UFUNCTION(BlueprintCallable)
    static bool FadeOut_White(float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static bool FadeOut_Color(FColor Color, float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static bool FadeOut_Black(float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static bool FadeOut_BeforeColor(float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static bool FadeIn_White(float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static bool FadeIn_Color(FColor Color, float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static bool FadeIn_Black(float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static bool FadeIn_BeforeColor(float Time, bool isInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static void FadeClear();
    
    UFUNCTION(BlueprintCallable)
    static void CallDebug();
    
};

