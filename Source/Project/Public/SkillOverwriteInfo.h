#pragma once
#include "CoreMinimal.h"
#include "E_OVERWRITE_CONDITION.h"
#include "E_OVERWRITE_FORMULA.h"
#include "SkillOverwriteInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkillOverwriteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_OVERWRITE_CONDITION m_OverwriteCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_OverwriteSubCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_OVERWRITE_FORMULA m_OverwriteFormula;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OverwriteValue;
    
    PROJECT_API FSkillOverwriteInfo();
};

