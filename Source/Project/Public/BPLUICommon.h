#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ListAnimationBaseData.h"
#include "SortMouseBaseData.h"
#include "BPLUICommon.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable)
class UBPLUICommon : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPLUICommon();

    UFUNCTION(BlueprintCallable)
    static bool StopUseSkillListAnimation(UPARAM(Ref) FListAnimationBaseData& InData);
    
    UFUNCTION(BlueprintCallable)
    static bool StartUseSkillListAnimation(UPARAM(Ref) FListAnimationBaseData& InData, int32 InDisplayMax);
    
    UFUNCTION(BlueprintCallable)
    static bool SortMouseUnlockSortMouse(UPARAM(Ref) FSortMouseBaseData& InData);
    
    UFUNCTION(BlueprintCallable)
    static bool SortMouseSetParameterAddElement(UPARAM(Ref) FSortMouseBaseData& InData, int32 InIndex, int32 InDispIndex, int32 InOffsetIndex, int32 InElementIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SortMouseSetParameter(UPARAM(Ref) FSortMouseBaseData& InData, int32 InIndex, int32 InDispIndex, int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SortMouseLockSortMouse(UPARAM(Ref) FSortMouseBaseData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SortMouseIsParameterAvailabel(UPARAM(Ref) FSortMouseBaseData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SortMouseGetParameter(UPARAM(Ref) FSortMouseBaseData& InData, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetParameterAvailabelFlag(UPARAM(Ref) FSortMouseBaseData& InData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNumberDisplay(int32 InNumber, int32 InIndex, int32 InEndIndex, bool InZeroSpace, bool InCheckSpace);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInsideRectAngle(float InRectPosX, float InRectPosY, float InRectSizeX, float InRectSizeY, float InPosX, float InPosY);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerId();
    
    UFUNCTION(BlueprintCallable)
    static bool GetNumberParam(int32 InNumber, int32 InDigits, UPARAM(Ref) TArray<int32>& inArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNumberItemParam(int32 InMax, int32 InDigits, int32 InItemNo, UPARAM(Ref) TArray<int32>& inArray);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMouseWheelParameter(float InParameter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetMouseOvered(UObject* WorldContextObject, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCursorIndexAtBothEnds(int32 InType, int32 InIndex, int32 InCompareIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 CalcUseSkillListAnimation(UPARAM(Ref) FListAnimationBaseData& InData, float InDeltaTime);
    
};

