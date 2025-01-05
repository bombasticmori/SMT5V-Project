#pragma once
#include "CoreMinimal.h"
#include "TalkRequestItemRankTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkRequestItemRankTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_RankWeights;
    
    PROJECT_API FTalkRequestItemRankTable();
};

