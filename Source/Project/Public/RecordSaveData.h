#pragma once
#include "CoreMinimal.h"
#include "RecordSaveData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FRecordSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_Counter;
    
    FRecordSaveData();
};

