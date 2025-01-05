#pragma once
#include "CoreMinimal.h"
#include "CampCharaPanelStockListData.generated.h"

USTRUCT(BlueprintType)
struct FCampCharaPanelStockListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_NkmIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GlobalEntryId;
    
    PROJECT_API FCampCharaPanelStockListData();
};

