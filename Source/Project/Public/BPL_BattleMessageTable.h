#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_BattleMessageTable.generated.h"

class UBattleMessageTable;
class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleMessageTable : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleMessageTable();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBattleMessageTable* BattleMessageTableGetInst();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBattleMessageTable* BattleMessageTableCreateInst(UScriptMessageAsset* pMessage);
    
    UFUNCTION(BlueprintCallable)
    static void BattleMessageTableClearInst();
    
};

