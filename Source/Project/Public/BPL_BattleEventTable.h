#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BattleEventData.h"
#include "BPL_BattleEventTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleEventTable : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleEventTable();

    UFUNCTION(BlueprintCallable)
    static TArray<FBattleEventData> BattleEventTableGetDataList(int32 battleNo);
    
};

