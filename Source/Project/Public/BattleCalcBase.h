#pragma once
#include "CoreMinimal.h"
#include "BattleActorComponentBase.h"
#include "BtlParty.h"
#include "BtlResultData.h"
#include "EnemyData.h"
#include "BattleCalcBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UBattleCalcBase : public UBattleActorComponentBase {
    GENERATED_BODY()
public:
    UBattleCalcBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 StanDamageCalc(int32 SkillId, int32 srcLv, int32 dstLv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlResultData ResultItemGabage(const FBtlResultData& pResult, int32 getItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResultItemKindNum(const FBtlResultData& pResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMagatsuhiDevilFirstDropItemIDandNum(const FBtlParty& party, const FEnemyData& EnemyData, bool Log, int32& outItemID, int32& outItemNum);
    
    UFUNCTION(BlueprintCallable)
    FBtlResultData GetExpMakkaItemForTalk(const FBtlResultData& pResult, const FBtlParty& pParty);
    
    UFUNCTION(BlueprintCallable)
    FBtlResultData GetExpMakkaItem(const FBtlResultData& pResult, const FBtlParty& pParty, bool isRenzoku);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BattleRandF2(float Min, float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BattleRandF(float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BattleRand2(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BattleRand(int32 Max);
    
};

