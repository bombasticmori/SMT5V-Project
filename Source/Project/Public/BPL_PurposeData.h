#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_PurposeData.generated.h"

UCLASS(Blueprintable)
class UBPL_PurposeData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_PurposeData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCurrentPurposeData();
    
};

