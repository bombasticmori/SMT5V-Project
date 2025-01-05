#pragma once
#include "CoreMinimal.h"
#include "UISystemData.generated.h"

USTRUCT(BlueprintType)
struct FUISystemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sUIListSpeedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sUtsusemiSortSkillId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUtsusemiSortUnusedOffFlag;
    
    PROJECT_API FUISystemData();
};

