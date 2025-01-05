#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_MapSymbol_CPP.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_MapSymbol_CPP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MapSymbol_CPP();

    UFUNCTION(BlueprintCallable)
    static void BPL_UpdateMapSymbolAll(float deltaSec);
    
    UFUNCTION(BlueprintCallable)
    static void BPL_MapSymbolLog(const FString& Str, float Time, FColor Color, bool bVerbose);
    
};

