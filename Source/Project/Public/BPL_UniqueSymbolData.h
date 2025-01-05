#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UniqueSymbolData.h"
#include "BPL_UniqueSymbolData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_UniqueSymbolData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_UniqueSymbolData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FUniqueSymbolData> GetUniqueSymbolDataList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueSymbolData GetUniqueSymbolData(int32 uniqueSymbolID);
    
};

