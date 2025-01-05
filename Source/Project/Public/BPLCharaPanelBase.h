#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_BTL_CNT.h"
#include "E_CHARAPANEL_SUPPORTICON_TYPE.h"
#include "BPLCharaPanelBase.generated.h"

UCLASS(Blueprintable)
class UBPLCharaPanelBase : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPLCharaPanelBase();

    UFUNCTION(BlueprintCallable)
    static bool SetCharaPanelVNumberPosMode(int32 InPosMode);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCharaPanelVNumberMoveMode(int32 InMoveMode);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetVNumberMode(int32 InCalcHP, int32 InCalcMP);
    
    UFUNCTION(BlueprintCallable)
    static E_CHARAPANEL_SUPPORTICON_TYPE GetSupportParameter(E_BTL_CNT InBTLCNT);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetInterporatePosition(FVector2D InPosStart, FVector2D InPosEnd, float InRatio);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCharaPanelVNumberPosMode();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCharaPanelVNumberMoveMode();
    
    UFUNCTION(BlueprintCallable)
    static float GetBezier(float x0, float x1, float x2, float x3, float bt);
    
    UFUNCTION(BlueprintCallable)
    static E_CHARAPANEL_SUPPORTICON_TYPE CalcSupportParameter(E_BTL_CNT InBTLCNT, int32 InValue);
    
};

