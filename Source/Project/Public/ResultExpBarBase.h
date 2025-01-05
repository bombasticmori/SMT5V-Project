#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ResultExpBarBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UResultExpBarBase : public UUserWidget {
    GENERATED_BODY()
public:
    UResultExpBarBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInterval_Zero2Max();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInterval_Top2ExpMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInterval_LvUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInterval_EndRatio(float endRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcUpMP(int32 DevilID, int32 beforeMaxMP, int32 beforeLv, int32 afterLv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcUpHP(int32 DevilID, int32 beforeMaxHP, int32 beforeLv, int32 afterLv);
    
};

