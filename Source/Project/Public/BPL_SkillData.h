#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_ATTRIBUTE_TYPE.h"
#include "E_AUTO_SKILL_EFT_TYPE.h"
#include "E_AUTO_SKILL_EXTRA_EFFECT.h"
#include "E_SKILL_ENABLE_SCENE.h"
#include "E_SKILL_EXTRA_EFFECT.h"
#include "E_SKILL_KIND.h"
#include "E_SKILL_LIMITED.h"
#include "E_SKILL_REC_TYPE.h"
#include "E_SKILL_TARGET.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "E_SKILL_TEKISEI_TYPE.h"
#include "E_SKILL_TYPE.h"
#include "E_SKILL_UNIQUE_TYPE.h"
#include "E_SKILL_WHISPER_VAL_TYPE.h"
#include "MultiDevilMagatsuhiSkillData.h"
#include "SkillAutoErupt.h"
#include "SkillBaseData.h"
#include "SkillInfoMess.h"
#include "BPL_SkillData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_SkillData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_SkillData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillMasterIsMasterOn(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool SkillIsUseCamp(int32 InSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillIsPhysicalAttack(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillIsMasicalAttack(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_KIND SkillIDGetKind(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillGetWhisperVal(FSkillBaseData pData, int32 whisperCount, E_SKILL_WHISPER_VAL_TYPE valType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillGetNKMWhisperVal(FSkillBaseData pData, int32 whisperCount, E_SKILL_WHISPER_VAL_TYPE valType);
    
    UFUNCTION(BlueprintCallable)
    static int32 SkillBstToNormalBst(uint8 skillBst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataIsTargetAll(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataIsRecoveryType(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataIsRecome(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataIsHaveExtraEffect(FSkillBaseData pData, E_SKILL_EXTRA_EFFECT Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataIsAIDSkill(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_ENABLE_SCENE SkillBaseDataGetValue_UseScene(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_TYPE SkillBaseDataGetValue_Type(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> SkillBaseDataGetValue_TekiseiTypeArray(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_TEKISEI_TYPE SkillBaseDataGetValue_TekiseiType(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_TEKISEI_CATEGORY SkillBaseDataGetValue_TekiseiCategory(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_Taru(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_Suku(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillBaseDataGetValue_SkillSource(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillBaseDataGetValue_RecVal(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_REC_TYPE SkillBaseDataGetValue_RecType(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_RecRate(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_RecBst(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_Rate(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_Rank(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_Raku(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillBaseDataGetValue_NameSortID(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_MP(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillBaseDataGetValue_MasterCost(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_Maka(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_LIMITED SkillBaseDataGetValue_Limited(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_LibEntry(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillBaseDataGetValue_LibCost(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_Keishou(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataGetValue_IsMagatsuhiSkill(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataGetValue_IsKantuu(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataGetValue_IsEnableSkip(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataGetValue_IsEnableShowSkillName(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillBaseDataGetValue_IsDummy(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillBaseDataGetValue_ID(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_Icon(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_DeadEffect(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_CriticalRate(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_BstRate(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SkillBaseDataGetValue_Bst(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SkillBaseDataGetValue_AtkVal(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_AtkNumMax(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_AtkNum(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<E_ATTRIBUTE_TYPE> SkillBaseDataGetValue_AtkAttrTArray(const FSkillBaseData& pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_ATTRIBUTE_TYPE SkillBaseDataGetValue_AtkAttr(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_TARGET SkillBaseDataGetValue_Area(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_AbsorbMpRate(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillBaseDataGetValue_AbsorbHpRate(FSkillBaseData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkillAutoEruptIsHaveExtraEffect(FSkillAutoErupt pData, E_AUTO_SKILL_EXTRA_EFFECT Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillAutoEruptGetValue_Kantuu(FSkillAutoErupt pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_AUTO_SKILL_EFT_TYPE SkillAutoEruptGetValue_EruptType(FSkillAutoErupt pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillAutoEruptGetValue_ClenchingType(FSkillAutoErupt pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SkillAutoEruptGetValue_BstRate(FSkillAutoErupt pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_ATTRIBUTE_TYPE SkillAutoEruptGetValue_Attr(FSkillAutoErupt pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SkillAutoEruptGetExtraEffects(FSkillAutoErupt pData, TArray<E_AUTO_SKILL_EXTRA_EFFECT>& list);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSkillAutoEruptUnique(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMagatsuhiSkill(int32 InSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItPossibletoDisplayToCost(int32 InSkillId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUtsusemiSortSkillIdPriority(int32 InSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkillUniqueValue(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_SKILL_UNIQUE_TYPE GetSkillUniqueType(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static E_SKILL_TEKISEI_CATEGORY GetSkillTekiseiCategory(int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSkillName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSkillInfoMessText(int32 MessageID, bool isMaster);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSkillInfoMess GetSkillInfoMessData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkillIdMax();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSkillIconPriority(int32 InSkillId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSkillIconIdBySkillId(int32 InSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSkillHelp(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkillExtraEffectValue(E_SKILL_EXTRA_EFFECT Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSkillEffectName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSkillBaseData GetSkillBaseData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkillAutoEruptExtraEffectValue(FSkillAutoErupt pData, E_AUTO_SKILL_EXTRA_EFFECT Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSkillAutoErupt GetSkillAutoEruptData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMultiDevilMagatsuhiSkillNkmNum(const int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMultiDevilMagatsuhiSkillData GetMultiDevilMagatsuhiSkillData(const int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMagatsuhiSkillIdByPlayer(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMagatsuhiSkillIdByGroupId(int32 InGroupId, int32 InIndex);
    
};

