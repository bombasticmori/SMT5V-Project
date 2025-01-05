#pragma once
#include "CoreMinimal.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "StatusDefenceAishou.generated.h"

USTRUCT(BlueprintType)
struct FStatusDefenceAishou {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_ATTRIBUTE_TYPE m_AttrType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BuildParam;
    
    PROJECT_API FStatusDefenceAishou();
};

