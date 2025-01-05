#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnalyzeData.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "BPL_Analyze.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_Analyze : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Analyze();

    UFUNCTION(BlueprintCallable)
    static void Analyze_TakeOverDefenceAishouArg(const int32 rootDevilId, const int32 targetDevilId, FAnalyzeData& rootData, FAnalyzeData& targetData);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_TakeOverDefenceAishou(const int32 rootDevilId, const int32 targetDevilId);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_SetOpenFlagArg(const int32 DevilID, bool IsOpen, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_SetOpenFlag(const int32 DevilID, bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_SetNewIconFlag(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_ResetNewIconFlag(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenUniqueSkillArg(const int32 DevilID, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenUniqueSkill(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenSkillTekiseiArg(const int32 DevilID, const E_SKILL_TEKISEI_CATEGORY category, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenSkillTekisei(const int32 DevilID, const E_SKILL_TEKISEI_CATEGORY category);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenSkillArg(const int32 DevilID, const int32 useSkillId, FAnalyzeData& Data, const int32& swapSkillID);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenSkill(const int32 DevilID, const int32 useSkillId);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenDefenceAishouAttrArg(const int32 DevilID, const E_ATTRIBUTE_TYPE attr, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenDefenceAishouAttr(const int32 DevilID, const E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenDefenceAishouArg(const int32 DevilID, const int32 hitSkillId, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenDefenceAishou(const int32 DevilID, const int32 hitSkillId);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenAutoSkillArg(const int32 DevilID, const int32 useAutoSkillId, FAnalyzeData& Data, const int32& swapSkillID);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_OpenAutoSkill(const int32 DevilID, const int32 useAutoSkillId);
    
    UFUNCTION(BlueprintCallable)
    static bool Analyze_IsNewIconFlagOn(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAnalyzeData Analyze_GetAnalyzeData(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_Clear(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenUniqueSkillArg(const int32 DevilID, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenUniqueSkill(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenSkillTekiseiArg(const int32 DevilID, const E_SKILL_TEKISEI_CATEGORY category, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenSkillTekisei(const int32 DevilID, const E_SKILL_TEKISEI_CATEGORY category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenSkillArg(const int32 DevilID, const int32 SkillId, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenSkill(const int32 DevilID, const int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenDefenceAisyouArg(const int32 DevilID, const E_ATTRIBUTE_TYPE Type, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenDefenceAisyou(const int32 DevilID, const E_ATTRIBUTE_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenAnalyzeArg(const int32 DevilID, FAnalyzeData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Analyze_CheckIsOpenAnalyze(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_AllClearByRenewal();
    
    UFUNCTION(BlueprintCallable)
    static void Analyze_AllClearByReincarnation();
    
};

