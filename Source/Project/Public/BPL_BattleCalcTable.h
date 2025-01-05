#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_BTL_UPLIFTING_TYPE.h"
#include "BPL_BattleCalcTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleCalcTable : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleCalcTable();

    UFUNCTION(BlueprintCallable)
    static int32 GetRateUpliftingType(E_BTL_UPLIFTING_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRandUpliftingType(E_BTL_UPLIFTING_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static FText BattleGetCommonMess(int32 Index);
    
};

