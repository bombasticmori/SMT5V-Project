#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UICalcRectCheck.h"
#include "UICalc.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UUICalc : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUICalc();

    UFUNCTION(BlueprintCallable)
    static TArray<FUICalcRectCheck> CalcRectNoOverlaid(TArray<FUICalcRectCheck> rect, FVector2D ScreenSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FUICalcRectCheck> CalcRect_Sort_MinPostionX(TArray<FUICalcRectCheck> rect);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FUICalcRectCheck> CalcRect_SlideSide(TArray<FUICalcRectCheck> rect);
    
};

