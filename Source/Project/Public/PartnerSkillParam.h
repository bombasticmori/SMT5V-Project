#pragma once
#include "CoreMinimal.h"
#include "PartnerSkillParam.generated.h"

USTRUCT(BlueprintType)
struct FPartnerSkillParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Ratio;
    
    PROJECT_API FPartnerSkillParam();
};

