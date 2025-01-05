#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EXTEND_ACTION.h"
#include "SkillActionTargetInfo.h"
#include "SkillActionExtend.generated.h"

USTRUCT(BlueprintType)
struct FSkillActionExtend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_EXTEND_ACTION m_ExtendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillActionTargetInfo m_TargetInfo;
    
    PROJECT_API FSkillActionExtend();
};

