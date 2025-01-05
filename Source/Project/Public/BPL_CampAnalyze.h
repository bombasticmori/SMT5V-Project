#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_CampAnalyze.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_CampAnalyze : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CampAnalyze();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> CampAnalyze_GetAnalyzeOpenList();
    
};

