#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_AchievementCounter.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_AchievementCounter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_AchievementCounter();

    UFUNCTION(BlueprintCallable)
    static void SetWeakCounter(uint8 _weakCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetUseMagatsuhiCounter(uint8 _useMagatsuhiCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetScoutSuccessCounter(int32 _scoutSuccessCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetPaidMoneyCounter(int32 _paidMoneyCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissEtcCounter(uint8 _missEtcCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetBunreiKillCounter(uint8 _killCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUtsusemiUnionCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubQuestClearCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLearningGodParameterCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDevilStatueFlagCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentTalkCounter(int32& _ScoutSuccess, int32& _PaidMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentBattleCounter(uint8& _bunreiKill, uint8& _weak, uint8& _missBlockRefAbs, uint8& _useMagatsuhi);
    
    UFUNCTION(BlueprintCallable)
    static void CountUpUtsusemiUnionCount();
    
    UFUNCTION(BlueprintCallable)
    static void AddUtsusemiUnionCounter(int32& _utsusemiCounter);
    
};

