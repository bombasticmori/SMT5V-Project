#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BtlParty.h"
#include "E_OVERWRITE_FORMULA.h"
#include "SkillBaseData.h"
#include "BPI_CalcInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBPI_CalcInterface : public UInterface {
    GENERATED_BODY()
};

class IBPI_CalcInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool BI_UniqueSkill_KantuuNormalAttack(const int32& srcIndex, const int32& SkillId, const bool& isSkill) PURE_VIRTUAL(BI_UniqueSkill_KantuuNormalAttack, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_UniqueSkill_Kantuu(const FBtlParty& srcParty, const FBtlParty& dstParty, bool isForceNormalAttack) PURE_VIRTUAL(BI_UniqueSkill_Kantuu, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetOverwriteFormulaValue(FSkillBaseData SkillData, E_OVERWRITE_FORMULA formula) PURE_VIRTUAL(BI_GetOverwriteFormulaValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_GetMagatsuhiDevilFirstDropItemIDandNum(const FBtlParty& party, bool Log, int32& outItemID, int32& outItemNum) PURE_VIRTUAL(BI_GetMagatsuhiDevilFirstDropItemIDandNum,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetEscapeRate() PURE_VIRTUAL(BI_GetEscapeRate, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckOverwriteFormulaValue(FSkillBaseData SkillData, E_OVERWRITE_FORMULA formula) PURE_VIRTUAL(BI_CheckOverwriteFormulaValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_BattleRandF2(float Min, float Max) PURE_VIRTUAL(BI_BattleRandF2, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_BattleRandF(float Max) PURE_VIRTUAL(BI_BattleRandF, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_BattleRand2(int32 Min, int32 Max) PURE_VIRTUAL(BI_BattleRand2, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_BattleRand(int32 Max) PURE_VIRTUAL(BI_BattleRand, return 0;);
    
};

