#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RESULT_JOINDATA.h"
#include "ResultData.h"
#include "BPL_ResultData.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROJECT_API UBPL_ResultData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ResultData();

    UFUNCTION(BlueprintCallable)
    static void TestFuncDropItemRandomGet(const int32 getNum);
    
    UFUNCTION(BlueprintCallable)
    static void TestFuncAddEnemyExpData(const int32 enemyLv, const int32 Exp);
    
    UFUNCTION(BlueprintCallable)
    static void StackResultData(UPARAM(Ref) FResultData& inResultData, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleResultEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void ResultDataClear();
    
    UFUNCTION(BlueprintCallable)
    static void PushResultMainActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* PopResultMainActor();
    
    UFUNCTION(BlueprintCallable)
    static void OverrideBtlCntInResultData(int32 newBtlCnt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBattleResultEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ExistPushedResultMainActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<RESULT_JOINDATA> CreateInitializedJoinData(RESULT_JOINDATA joinData);
    
};

