#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_Network.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_Network : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Network();

    UFUNCTION(BlueprintCallable)
    static bool LoginUI();
    
};

