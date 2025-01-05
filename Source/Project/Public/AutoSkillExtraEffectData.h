#pragma once
#include "CoreMinimal.h"
#include "E_AUTO_SKILL_EXTRA_EFFECT.h"
#include "AutoSkillExtraEffectData.generated.h"

USTRUCT(BlueprintType)
struct FAutoSkillExtraEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_AUTO_SKILL_EXTRA_EFFECT m_Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    PROJECT_API FAutoSkillExtraEffectData();
};

