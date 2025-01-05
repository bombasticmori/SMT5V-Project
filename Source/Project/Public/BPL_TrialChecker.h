#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_TrialChecker.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBPL_TrialChecker : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TrialChecker();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTrialVersion(const UObject* WorldContextObject);
    
};

