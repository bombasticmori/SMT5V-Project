#pragma once
#include "CoreMinimal.h"
#include "TalkBattleInfo.generated.h"

USTRUCT(BlueprintType)
struct FTalkBattleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ApologyDevilIdArray;
    
    PROJECT_API FTalkBattleInfo();
};

