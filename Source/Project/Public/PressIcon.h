#pragma once
#include "CoreMinimal.h"
#include "PressIcon.generated.h"

USTRUCT(BlueprintType)
struct FPressIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PressPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PressPointHalf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ExtendInPressPoint;
    
    PROJECT_API FPressIcon();
};

