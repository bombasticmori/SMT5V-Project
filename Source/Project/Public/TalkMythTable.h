#pragma once
#include "CoreMinimal.h"
#include "TalkMythTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkMythTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MythId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FriendId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EnemyID;
    
    PROJECT_API FTalkMythTable();
};

