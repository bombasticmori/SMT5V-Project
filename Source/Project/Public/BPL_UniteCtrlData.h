#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AbilData.h"
#include "E_TUTORIAL_WINDOW_MESSAGE_TYPE.h"
#include "E_UNITE_NKM_TYPE.h"
#include "NkmData.h"
#include "UniteCtrlData.h"
#include "BPL_UniteCtrlData.generated.h"

class UUniteTableAsset;

UCLASS(Blueprintable)
class PROJECT_API UBPL_UniteCtrlData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_UniteCtrlData();

    UFUNCTION(BlueprintCallable)
    static void WriteNkmData_ByBibleData(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateUniteSpOpenAnnounce();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateUniteKamuiOpenAnnounce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UniteDebug_UseDebugSearch();
    
    UFUNCTION(BlueprintCallable)
    static void UniteDebug_UpdateDebugHpMpLogFlag();
    
    UFUNCTION(BlueprintCallable)
    static void UniteDebug_UpdateDebugFlag(int32 flagno);
    
    UFUNCTION(BlueprintCallable)
    static void UniteDebug_SetBonusDevilData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UniteDebug_NonAccident();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UniteDebug_NoCost();
    
    UFUNCTION(BlueprintCallable)
    static void UniteDebug_NearlyCompletedBible();
    
    UFUNCTION(BlueprintCallable)
    static void UniteDebug_InitDebugFlag();
    
    UFUNCTION(BlueprintCallable)
    static void UniteDebug_InitBibleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UniteDebug_CheckLevelUnlimited();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UniteDebug_CheckBibleAllOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UniteDebug_Accident();
    
    UFUNCTION(BlueprintCallable)
    static void UninitUniteDataCtrl();
    
    UFUNCTION(BlueprintCallable)
    static void SummonDevilData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void SummonBibleData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNewUniteTutorialFlag(E_TUTORIAL_WINDOW_MESSAGE_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetNewUniteSpFlag(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadUniteCombineTable(UUniteTableAsset* pUniteAsset);
    
    UFUNCTION(BlueprintCallable)
    static int32 LotUniteAccidentDevilFromID(int32 ResultDevil);
    
    UFUNCTION(BlueprintCallable)
    static bool LotUniteAccident(int32 InSourceDevil1, int32 InSourceDevil2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverwriteDefenceAishou();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverwriteDefaultSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenUniteTutorialType(E_TUTORIAL_WINDOW_MESSAGE_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenUniteSp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenUnite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenBible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDynamicResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDispUniteUtsusemiNewIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbleUniteSozaiDevil(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbleUniteInheritSkill(int32 ResultDevilId, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static void InitUniteDataCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUniteSpOpenAnnounceList(TArray<int32>& devilIdList, TArray<int32>& indexList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUniteLevel();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUniteDoubleResult(int32 DevilId1, int32 DevilId2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUniteDevilLevel(int32 DevilID, E_UNITE_NKM_TYPE nkmType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniteCtrlData GetUniteCtrlData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetUniteBgBlurStrength(float InBlurStrength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkillRank(int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNkmData_ByPartyData(int32 DevilID, FNkmData& NkmData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNkmData_ByDevilData(int32 DevilID, FNkmData& NkmData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNkmData_ByBibleData(int32 DevilID, FNkmData& NkmData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBibleEntryRate();
    
    UFUNCTION(BlueprintCallable)
    static void ClearUniteSpOpenAnnounceFlag();
    
    UFUNCTION(BlueprintCallable)
    static void ClearUniteKamuiOpenAnnounceFlag();
    
    UFUNCTION(BlueprintCallable)
    static void ClearNewUniteMenuFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckUniteKamuiOpenAnnounce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckUniteBibleEntry(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNewUniteTutorialFlag(E_TUTORIAL_WINDOW_MESSAGE_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNewUniteSpFlag(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckAnyNewUniteSpFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAbilData CalcUniteBonusParamByList(int32 ResultDevil, const TArray<int32>& sourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAbilData CalcUniteBonusParam(int32 ResultDevil, int32 sourceDevil1, int32 sourceDevil2, int32 sourceDevil3, int32 sourceDevil4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcUniteAddExpByList(int32 ResultDevil, const TArray<int32>& sourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcUniteAddExp(int32 ResultDevil, int32 sourceDevil1, int32 sourceDevil2, int32 sourceDevil3, int32 sourceDevil4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcDevilCost_ByPartyData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcDevilCost_ByDevilData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcDevilCost_ByBibleData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void CalcAccidentSkill(TArray<int32>& OutSkillList, const int32 ResultDevil, const int32 accidentDevil, const TArray<int32>& srcDevilList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 AdjustUniteDevilCost(int32 InCost);
    
};

