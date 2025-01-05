#pragma once
#include "CoreMinimal.h"
#include "SkillExtraEffect.generated.h"

USTRUCT(BlueprintType)
struct FSkillExtraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    PROJECT_API FSkillExtraEffect();
};

