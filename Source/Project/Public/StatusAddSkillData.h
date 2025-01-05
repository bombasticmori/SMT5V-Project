#pragma once
#include "CoreMinimal.h"
#include "StatusAddSkillData.generated.h"

USTRUCT(BlueprintType)
struct FStatusAddSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillId;
    
    PROJECT_API FStatusAddSkillData();
};

