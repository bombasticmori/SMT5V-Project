#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BtlCommand.h"
#include "BtlParty.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_BTL_REFLECT_RES_TYPE.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "BPL_BattleParty.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleParty : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleParty();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattlePartyStockIsExistDeadAny(TArray<FBtlParty> partyArray);
    
    UFUNCTION(BlueprintCallable)
    static FBtlParty BattlePartySetNowCommand(FBtlParty src, FBtlCommand Cmd);
    
    UFUNCTION(BlueprintCallable)
    static FBtlParty BattlePartySetAutoEruptAidCounter(FBtlParty src);
    
    UFUNCTION(BlueprintCallable)
    static FBtlParty BattlePartyNkmParamSwitch(FBtlParty pNkmData, bool IsNahobino);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattlePartyIsItemUseableItemList(FBtlParty Actor, int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattlePartyIsHero(UPARAM(Ref) FBtlParty& Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BattlePartyGetTekiseiValue(FBtlParty src, E_SKILL_TEKISEI_CATEGORY categ);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> BattlePartyGetSkillList(FBtlParty src);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BattlePartyGetSkillCost(FBtlParty src, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static int32 BattlePartyGetAidCounterMinValue(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 BattlePartyGetAidCounterMaxValue(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BattlePartyGetAidCounter(FBtlParty src, int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattlePartyCanCounter(FBtlParty src, FBtlParty dst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BattlePartyAttributeHit(FBtlParty src, E_ATTRIBUTE_TYPE attr, E_BTL_REFLECT_RES_TYPE& ret, bool& isBarrierHit);
    
    UFUNCTION(BlueprintCallable)
    static FBtlCommand BattleCommandSetSkill(FBtlParty src, int32 SkillId, int32 targetIndex);
    
    UFUNCTION(BlueprintCallable)
    static FBtlCommand BattleCommandSetAttack(FBtlParty src, int32 targetIndex);
    
};

