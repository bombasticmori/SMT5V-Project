#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_MapAreaName.generated.h"

UCLASS(Blueprintable)
class UBPL_MapAreaName : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MapAreaName();

    UFUNCTION(BlueprintCallable)
    static FText GetMapAreaNameText(const FName& Label);
    
};

