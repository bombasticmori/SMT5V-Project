#pragma once
#include "CoreMinimal.h"
#include "SkillActionDrainInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkillActionDrainInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DrainHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DrainMp;
    
    PROJECT_API FSkillActionDrainInfo();
};

