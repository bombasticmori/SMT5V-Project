#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_GODPARAMETER_ID.h"
#include "E_GODPARAMETER_STATE.h"
#include "E_GODPARAMETER_TYPE.h"
#include "GodParameterData.h"
#include "BPL_GodParameter.generated.h"

UCLASS(Blueprintable)
class UBPL_GodParameter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_GodParameter();

    UFUNCTION(BlueprintCallable)
    static void SetGodParameterSkillNewIcon(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable)
    static void SetGodParameterSkillActiveState(int32 argSkillID, bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    static void SetGodParameterPoint(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetGodParameterSkillNewIcon(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable)
    static void ResetGodParameterSkill(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSetGodParameterSkillNewIcon(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLearningGodParameterSkillFromEnum(E_GODPARAMETER_ID argSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLearningGodParameterSkill(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLearnableGodParameterSkill(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistNewGodParameterSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAddedSelectableGodParameterSkill(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActiveGodParameterSkill(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable)
    static void GodParameterSkillLearningAll();
    
    UFUNCTION(BlueprintCallable)
    static bool GodParameterSkillLearning(int32 argSkillID, bool forced);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUserDataFromGodParameterData(E_GODPARAMETER_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_GODPARAMETER_STATE GetGodParameterSkillState(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGodParameterSKillNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGodParameterPointMaxNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGodParameterPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGodParameterNameFromEnum(E_GODPARAMETER_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGodParameterName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGodParameterLearningNumFromType(E_GODPARAMETER_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGodParameterHelpFromEnum(E_GODPARAMETER_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGodParameterHelp(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGodParameterData GetGodParameterDataFromEnum(E_GODPARAMETER_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGodParameterData GetGodParameterData(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearGodParameterSkillLearningAll(bool isRenewalNewGame);
    
    UFUNCTION(BlueprintCallable)
    static void ClearGodParameterSkillLearning(int32 argSkillID);
    
    UFUNCTION(BlueprintCallable)
    static void AddGodParameterPoint(int32 Value);
    
};

