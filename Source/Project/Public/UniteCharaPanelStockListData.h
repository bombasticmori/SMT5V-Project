#pragma once
#include "CoreMinimal.h"
#include "UniteCharaPanelStockListData.generated.h"

USTRUCT(BlueprintType)
struct FUniteCharaPanelStockListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_NkmIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GlobalEntryId;
    
    PROJECT_API FUniteCharaPanelStockListData();
};

