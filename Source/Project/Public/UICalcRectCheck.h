#pragma once
#include "CoreMinimal.h"
#include "UICalcRect.h"
#include "UICalcRectCheck.generated.h"

USTRUCT(BlueprintType)
struct FUICalcRectCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUICalcRect m_MoveRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUICalcRect m_FixRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsBase;
    
    PROJECT_API FUICalcRectCheck();
};

