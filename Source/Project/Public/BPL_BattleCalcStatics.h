#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_BAD_STATUS.h"
#include "E_BST_TYPE.h"
#include "E_BTL_CNT.h"
#include "E_BTL_DIFF.h"
#include "E_BTL_PRESS_TYPE.h"
#include "E_GAME_DIFFICULTY.h"
#include "E_SKILL_TYPE.h"
#include "PressIcon.h"
#include "BPL_BattleCalcStatics.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleCalcStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleCalcStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_BTL_CNT GetRandSkillAidCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayerFirstRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayerCriticalRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHitPlayerBstRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHitPlayerAttackRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHitEnemyAttack(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEscapeSuccessRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEnemyBstRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDiffRate(E_BTL_DIFF diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDeathPlayerRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDeathEnemyRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDamageTakeEnemyRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDamageEnemyRate(E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckHighAisyo(int32 aisyo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDamageAttackKindPhysical(E_SKILL_TYPE Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDamageAttackKind(E_SKILL_TYPE Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_BST_TYPE CheckBstType(E_BAD_STATUS bst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckAishouMinus(int32 targetAishou);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CancelBst(int32& bst_bit);
    
    UFUNCTION(BlueprintCallable)
    static FPressIcon CalcPressIcon(E_BTL_PRESS_TYPE press_type, FPressIcon current_press_icon);
    
    UFUNCTION(BlueprintCallable)
    static FPressIcon CalcDrawPressIconNum(FPressIcon current_press_icon);
    
    UFUNCTION(BlueprintCallable)
    static FPressIcon ApplyPressIcon(FPressIcon current_press_icon, FPressIcon add_press_icon);
    
    UFUNCTION(BlueprintCallable)
    static uint8 AddCount(const uint8& originValue, const uint8& addValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ActSpeedCalc(float baseSpd, float baseLv);
    
};

