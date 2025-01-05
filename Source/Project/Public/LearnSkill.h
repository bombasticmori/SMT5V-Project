#pragma once
#include "CoreMinimal.h"
#include "E_LEARN_SKILL_TYPE.h"
#include "LearnSkill.generated.h"

USTRUCT(BlueprintType)
struct FLearnSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_LEARN_SKILL_TYPE m_LearnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillId;
    
    PROJECT_API FLearnSkill();
};

