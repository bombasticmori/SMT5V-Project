#pragma once
#include "CoreMinimal.h"
#include "UniteSkillData.generated.h"

USTRUCT(BlueprintType)
struct FUniteSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAbleInherit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDefaultSkill;
    
    PROJECT_API FUniteSkillData();
};

