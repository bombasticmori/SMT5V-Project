#pragma once
#include "CoreMinimal.h"
#include "AddGetSkill.generated.h"

USTRUCT(BlueprintType)
struct FAddGetSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Skill;
    
    PROJECT_API FAddGetSkill();
};

