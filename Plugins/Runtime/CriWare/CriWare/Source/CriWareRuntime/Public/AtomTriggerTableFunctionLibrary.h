#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AtomTriggerRow.h"
#include "AtomTriggerTableFunctionLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomTriggerTableFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FAtomTriggerRow& OutRow);
    
};

