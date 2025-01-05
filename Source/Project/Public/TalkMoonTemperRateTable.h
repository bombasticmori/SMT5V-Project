#pragma once
#include "CoreMinimal.h"
#include "TalkMoonTemperRateTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkMoonTemperRateTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_Rates;
    
    PROJECT_API FTalkMoonTemperRateTable();
};

