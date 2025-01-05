#pragma once
#include "CoreMinimal.h"
#include "TalkMythProcess.h"
#include "TalkMythProcessTable.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FTalkMythProcessTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkMythProcess> m_ProcessArray;
    
    FTalkMythProcessTable();
};

