#pragma once
#include "CoreMinimal.h"
#include "BtlAISkillData.generated.h"

USTRUCT(BlueprintType)
struct FBtlAISkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillPerc;
    
    PROJECT_API FBtlAISkillData();
};

