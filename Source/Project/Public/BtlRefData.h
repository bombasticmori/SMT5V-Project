#pragma once
#include "CoreMinimal.h"
#include "BtlRefData.generated.h"

USTRUCT(BlueprintType)
struct FBtlRefData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HPMax;
    
    PROJECT_API FBtlRefData();
};

