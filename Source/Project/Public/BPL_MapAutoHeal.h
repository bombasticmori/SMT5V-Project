#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MapAutoHealResult.h"
#include "BPL_MapAutoHeal.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_MapAutoHeal : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MapAutoHeal();

    UFUNCTION(BlueprintCallable)
    static void BPL_ProcMapAutoHeal(bool Log, bool& outUseHeal, bool& outHaveRebornSkill, bool& outHaveHPSkill, TArray<FMapAutoHealResult>& outResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPL_CheckNeedAutoHeal();
    
};

