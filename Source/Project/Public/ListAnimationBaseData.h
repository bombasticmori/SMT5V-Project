#pragma once
#include "CoreMinimal.h"
#include "ListAnimationBaseData.generated.h"

USTRUCT(BlueprintType)
struct FListAnimationBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bListAnimationFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sAnimationStepCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sDisplayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fListAnimationTime;
    
    PROJECT_API FListAnimationBaseData();
};

