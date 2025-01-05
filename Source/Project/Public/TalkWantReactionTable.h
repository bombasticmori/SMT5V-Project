#pragma once
#include "CoreMinimal.h"
#include "TalkWantReactionTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkWantReactionTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_Weights;
    
    PROJECT_API FTalkWantReactionTable();
};

