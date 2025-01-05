#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_StaticMeshTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PROJECT_API UBPL_StaticMeshTable : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_StaticMeshTable();

    UFUNCTION(BlueprintCallable)
    static void ApplyLODSetting(const UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyLightmapSetting(const UDataTable* DataTable);
    
};

