#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_EstomaRiberama.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_EstomaRiberama : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_EstomaRiberama();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRiberamaUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckEstomaUnlock();
    
};

