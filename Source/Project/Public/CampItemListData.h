#pragma once
#include "CoreMinimal.h"
#include "CampItemListData.generated.h"

USTRUCT(BlueprintType)
struct FCampItemListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Use;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Kind;
    
    PROJECT_API FCampItemListData();
};

