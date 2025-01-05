#pragma once
#include "CoreMinimal.h"
#include "UIAnimationCallData.generated.h"

USTRUCT(BlueprintType)
struct FUIAnimationCallData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AnimIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsRev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPlayStop;
    
    PROJECT_API FUIAnimationCallData();
};

