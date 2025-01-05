#pragma once
#include "CoreMinimal.h"
#include "TalkRequestItemTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkRequestItemTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxNum;
    
    PROJECT_API FTalkRequestItemTable();
};

