#pragma once
#include "CoreMinimal.h"
#include "TalkReactionTable.h"
#include "TalkChoiceTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkChoiceTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkReactionTable> m_Reaction;
    
    PROJECT_API FTalkChoiceTable();
};

