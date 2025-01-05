#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BtlKillData.h"
#include "BtlKuishibariData.h"
#include "BtlParty.h"
#include "E_KUISHIBARI_LEVEL.h"
#include "BPL_BattleMain.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleMain : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleMain();

    UFUNCTION(BlueprintCallable)
    static TArray<FBtlKuishibariData> BattleMainSetKuishibariUsedList(TArray<FBtlKuishibariData> list, FBtlParty src, E_KUISHIBARI_LEVEL Level);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBtlKillData> BattleMainSetKillEnemy(TArray<FBtlKillData> list, int32 enemyID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBtlKuishibariData> BattleMainDeleteKuishibariUsedList(TArray<FBtlKuishibariData> list, bool isPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattleMainCheckKuishibariUsedList(TArray<FBtlKuishibariData> list, FBtlParty src, E_KUISHIBARI_LEVEL Level);
    
};

