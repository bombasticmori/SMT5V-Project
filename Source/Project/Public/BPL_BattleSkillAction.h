#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BattleSkillAction_Raw.h"
#include "E_BTL_DAMAGE_HIT_TYPE.h"
#include "E_BTL_DEAD_EFFECT.h"
#include "E_BTL_EXTRA_ACTION.h"
#include "E_BTL_REFLECT_RES_TYPE.h"
#include "E_BTL_SKILL_ACTION_AID.h"
#include "E_SKILL_MASTER_TARGET.h"
#include "SkillActionDesc.h"
#include "SkillActionExtend.h"
#include "SkillActionTargetInfo.h"
#include "BPL_BattleSkillAction.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleSkillAction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleSkillAction();

    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetTargetIndex(FSkillActionTargetInfo src, int32 partyIndex, int32 fromPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetRecMP(FSkillActionTargetInfo src, int32 recMP, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetRecHP(FSkillActionTargetInfo src, int32 recHP, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetRecBst(FSkillActionTargetInfo src, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetNahobinoBreakOn(FSkillActionTargetInfo src);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetHitFull(FSkillActionTargetInfo src, E_BTL_REFLECT_RES_TYPE Value, E_BTL_DAMAGE_HIT_TYPE damageHit, int32 Damage, int32 damageReal, int32 rec, int32 damageMP, int32 recMP);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetHit(FSkillActionTargetInfo src, E_BTL_REFLECT_RES_TYPE Value, E_BTL_DAMAGE_HIT_TYPE damageHit, int32 Damage, int32 damageReal);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetDeadOn(FSkillActionTargetInfo src, E_BTL_DEAD_EFFECT deadType);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetDeadOff(FSkillActionTargetInfo src);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetCriticalLevel(FSkillActionTargetInfo src, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetCounterOn(FSkillActionTargetInfo src);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetBst(FSkillActionTargetInfo src, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoSetAid(FSkillActionTargetInfo src, E_BTL_SKILL_ACTION_AID aid);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoResistOn(FSkillActionTargetInfo src);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoGuardOn(FSkillActionTargetInfo src);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionTargetInfo BattleSkillActionTargetInfoComboOn(FSkillActionTargetInfo src);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleSkillActionLoadTable(UDataTable* DataTable, UPARAM(Ref) TMap<FName, FBattleSkillAction_Raw>& OutMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BattleSkillActionIsTargetNum(FSkillActionDesc src);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattleSkillActionIsTargetDead(FSkillActionDesc src, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattleSkillActionIsSkillMasterExec(FSkillActionDesc src);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BattleSkillActionGetSkillMasterEffectID(FSkillActionDesc src, int32& effectID, E_SKILL_MASTER_TARGET& target);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionDesc BattleSkillActionDescSetSkillID(FSkillActionDesc src, int32 SkillId, int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionDesc BattleSkillActionDescSetExtraAction(FSkillActionDesc src, E_BTL_EXTRA_ACTION Action);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionDesc BattleSkillActionDescSetCounterOn(FSkillActionDesc src);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionDesc BattleSkillActionDescSetActorIndex(FSkillActionDesc src, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionDesc BattleSkillActionDescAddTargetInfo(FSkillActionDesc src, FSkillActionTargetInfo Data, bool isReflex);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionDesc BattleSkillActionDescAddExtendAction(FSkillActionDesc src, FSkillActionExtend extend);
    
    UFUNCTION(BlueprintCallable)
    static FSkillActionDesc BattleSkillActionDescAddDrainHPMP(FSkillActionDesc src, int32 drainHP, int32 drainMP);
    
};

