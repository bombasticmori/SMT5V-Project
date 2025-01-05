#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_RECORD_ID.h"
#include "RecordData.h"
#include "BPL_Record.generated.h"

class UMMIAsset;
class URecordDataTable;
class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API UBPL_Record : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Record();

    UFUNCTION(BlueprintCallable)
    static void SetRecordCounter(E_RECORD_ID ID, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static URecordDataTable* MakeUpRecordDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pRecordName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRecordValueText(E_RECORD_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRecordUnitName(E_RECORD_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRecordName(E_RECORD_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRecordData GetRecordData(E_RECORD_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordCounter(E_RECORD_ID ID);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyRecordDataTable(URecordDataTable* pTable);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeRecordMaxCounter(E_RECORD_ID ID, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddRecordCounter(E_RECORD_ID ID, int32 Add);
    
};

