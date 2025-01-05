#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BtlParty.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_BTL_CNT.h"
#include "SkillBaseData.h"
#include "SkillCriticalValueOne.h"
#include "UseItemData.h"
#include "BPL_AsyncLib.generated.h"

class ABattleMainWorkBase;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_AsyncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_AsyncLib();

    UFUNCTION(BlueprintCallable)
    static bool SettleCriticalSkill(FBtlParty Player, FBtlParty Enemy, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static void SettleCriticalFunc(ABattleMainWorkBase* BattleMain, FBtlParty Player, TArray<FBtlParty> Enemy, TArray<FBtlParty> partyAll, TArray<FSkillCriticalValueOne>& result, bool& bFinished);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseSkillTargetSelect(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& user, const FBtlParty& target, bool isUse);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseSkillCommand(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& Player, const TArray<FBtlParty>& partyAll, bool isEscape);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseItemTargetSelect(UObject* mainWork, const FUseItemData& Item, const FBtlParty& user, const FBtlParty& target, bool isUse);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseItemCommandMainWork(UObject* mainWork, const FUseItemData& Item, const FBtlParty& Player, bool isEscape, bool isUse);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseItemCommand(UObject* mainWork, const FUseItemData& Item, const FBtlParty& Player, const TArray<FBtlParty>& partyAll, bool isEscape, bool isUse);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedSkillStock(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedSkill(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedRecomeSkill(const FSkillBaseData& skill, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedProvokeSkill(const FSkillBaseData& skill, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedPrevTurnAvoid(const FSkillBaseData& skill, const FBtlParty& Player);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedPressIcon(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& Player);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedPass(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& Player);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedMPCureSkill(const FSkillBaseData& skill, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedMPCureItem(const FUseItemData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedKarnSkill(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedKajyandaSkillCommon(const FBtlParty& Player, const FBtlParty& party, const int32 kajyanndaValue, const int32 kajyanndaTurn, const E_BTL_CNT kajyandaType, const E_BTL_CNT kajyandaTurnType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedKajyandaSkill(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedItem(const FUseItemData& Item, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedHPCureSkill(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedHPCureItem(const FUseItemData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedDamageCutSkill(const FSkillBaseData& skill, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedChargeSkill(const FSkillBaseData& skill, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedBstSkill(const FSkillBaseData& skill, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedBstCureSkill(const FSkillBaseData& skill, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedAnalyzeSkill(const FSkillBaseData& skill, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedAidClearSkill(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsedAddGaugeSkill(UObject* mainWork, const FSkillBaseData& skill, const int32& PlayerUpliftingGauge);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSkillBarrierCount(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRecoveryHPUpRate(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable)
    static E_BTL_CNT GetBarrierType(const uint8 barrier, const E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetAddMagatsuhiSkillId(const FBtlParty& Player, const TArray<FBtlParty>& partyAll);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckRecomeSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckProvokeSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPrevTurnAvoid(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPressIcon(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPass(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckMPCureSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckMPCureItem(const FUseItemData& Item);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckKarnSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckKajyandaSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckHPCureSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckHPCureItem(const FUseItemData& Item);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckDamageCutSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckChargeSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBstSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBstCureSkill(const FSkillBaseData& skill, const FBtlParty& Player);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAnalyzeSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAidClearSkill(const FSkillBaseData& skill);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAddGaugeSkill(const FSkillBaseData& skill);
    
};

