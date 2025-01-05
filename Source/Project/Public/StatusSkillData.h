#pragma once
#include "CoreMinimal.h"
#include "E_LEARN_SKILL_TYPE.h"
#include "StatusSkillData.generated.h"

USTRUCT(BlueprintType)
struct FStatusSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_LEARN_SKILL_TYPE m_LearnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BulidSkillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsAuto;
    
    PROJECT_API FStatusSkillData();
};

