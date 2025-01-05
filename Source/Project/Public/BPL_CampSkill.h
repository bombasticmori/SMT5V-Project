#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CampCommonCharaData.h"
#include "CampSkilResult.h"
#include "BPL_CampSkill.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_CampSkill : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CampSkill();

    UFUNCTION(BlueprintCallable)
    static void ExpenditureMp(FCampCommonCharaData actCharaData, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeUseSkillByScene(int32 InSkillId);
    
    UFUNCTION(BlueprintCallable)
    static FCampSkilResult CampSkill_UsedNonCost(FCampCommonCharaData actCharaData, FCampCommonCharaData tarCharaData, int32 SkillId, bool IsCalcOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool CampSkill_UsedAll(FCampCommonCharaData actCharaData, int32 SkillId, bool isCheck);
    
    UFUNCTION(BlueprintCallable)
    static FCampSkilResult CampSkill_Used(FCampCommonCharaData actCharaData, FCampCommonCharaData tarCharaData, int32 SkillId, bool isCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CampSkill_IsUseSkill(FCampCommonCharaData actCharaData, int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CampSkill_IsCureSkill(int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CampSkill_IsAllEffect(int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FCampCommonCharaData> CampSkill_GetUsedCharData(FCampCommonCharaData actCharaData, int32 SkillId);
    
};

