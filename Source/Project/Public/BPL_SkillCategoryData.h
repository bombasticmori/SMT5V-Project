#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_ABILITYNAME_TYPE.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_BAD_STATUS.h"
#include "E_ENDURE_TYPE.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "BPL_SkillCategoryData.generated.h"

UCLASS(Blueprintable)
class UBPL_SkillCategoryData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_SkillCategoryData();

    UFUNCTION(BlueprintCallable)
    static FText GetSkillTekiseiName(E_SKILL_TEKISEI_CATEGORY InType);
    
    UFUNCTION(BlueprintCallable)
    static FText GetEndureName(E_ENDURE_TYPE argrType);
    
    UFUNCTION(BlueprintCallable)
    static FText GetBadStatusName(E_BAD_STATUS InType);
    
    UFUNCTION(BlueprintCallable)
    static FText GetAttrName(E_ATTRIBUTE_TYPE argrType);
    
    UFUNCTION(BlueprintCallable)
    static FText GetAbilityName(E_ABILITYNAME_TYPE InType);
    
};

