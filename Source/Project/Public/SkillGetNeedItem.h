#pragma once
#include "CoreMinimal.h"
#include "SkillGetNeedItem.generated.h"

USTRUCT(BlueprintType)
struct FSkillGetNeedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NeedNum;
    
    PROJECT_API FSkillGetNeedItem();
};

