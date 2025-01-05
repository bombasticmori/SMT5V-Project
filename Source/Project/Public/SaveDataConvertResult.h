#pragma once
#include "CoreMinimal.h"
#include "SaveDataConvertResult.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataConvertResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Success;
    
    PROJECT_API FSaveDataConvertResult();
};

