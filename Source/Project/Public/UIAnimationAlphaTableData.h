#pragma once
#include "CoreMinimal.h"
#include "UIAnimationAlphaTableData.generated.h"

USTRUCT(BlueprintType)
struct FUIAnimationAlphaTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsLoop;
    
    PROJECT_API FUIAnimationAlphaTableData();
};

