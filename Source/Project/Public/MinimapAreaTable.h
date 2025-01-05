#pragma once
#include "CoreMinimal.h"
#include "MinimapAreaOverrideTableItem.h"
#include "MinimapAreaTableItem.h"
#include "MinimapAreaTable.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FMinimapAreaTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinimapAreaTableItem> m_ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinimapAreaOverrideTableItem> m_OverrideItemArray;
    
    FMinimapAreaTable();
};

