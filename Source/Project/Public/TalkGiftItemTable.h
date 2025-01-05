#pragma once
#include "CoreMinimal.h"
#include "E_TALK_GIFT_ITEM_TYPE.h"
#include "TalkGiftItemTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkGiftItemTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_GIFT_ITEM_TYPE m_ItemType;
    
    PROJECT_API FTalkGiftItemTable();
};

