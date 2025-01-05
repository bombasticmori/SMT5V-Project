#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MinimapIconTableHelper.h"
#include "MinimapIconTableRow.h"
#include "BPL_MinimapIconTable.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_MinimapIconTable : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MinimapIconTable();

    UFUNCTION(BlueprintCallable)
    static void SetMinimapIconTableRowFromHelperLocation(const FVector& Location, const FMinimapIconTableHelper& Helper, FMinimapIconTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static void SetMinimapIconTableRowFromHelper(const AActor* Actor, const FMinimapIconTableHelper& Helper, FMinimapIconTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static void OutputMinimapIconTableCSV(int32 mapId, int32 AreaId, TArray<UObject*> InObjects, const FString& PostFix);
    
};

