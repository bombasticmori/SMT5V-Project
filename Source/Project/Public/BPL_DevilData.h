#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AbilData.h"
#include "CreateModeDevilData.h"
#include "CreateModeDevilRate.h"
#include "DevilBaseData.h"
#include "E_AUTO_SKILL_EXTRA_EFFECT.h"
#include "EnemyData.h"
#include "BPL_DevilData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_DevilData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_DevilData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuestByDevilID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRacePriorityByDevilId(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRaceIdByDevilId(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMapPosPriority(int32 InPosId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMapAreaPriority(int32 InAreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEnemyMagatsuhiSkillId(int32 DevilID, int32 Index, bool isChallengeBtl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEnemyDefaultMagatsuhiSkillId(int32 DevilID, bool isChallengeBtl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEnemyData GetEnemyBaseData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEmemyBaseTableNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDevilRaceNameByRaceID(int32 raceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDevilRaceName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDevilName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDevilBaseTableNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDevilBaseData GetDevilBaseData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCreateModeDevilRate GetCreateModeDevilRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FCreateModeDevilData> GetCreateModeDevilDataArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAbilData GetCreateModeDevilAbilData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAreaPriorityByDevilId(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EnemyBaseDataGetValue_IsDummy(FEnemyData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DevilBaseDataGetValue_IsDummy(FDevilBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckUniqueSkillEffect(int32 ID, E_AUTO_SKILL_EXTRA_EFFECT SkillExtraEffect);
    
};

