#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WaveConvTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct PROJECT_API FWaveConvTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_DataTable;
    
    FWaveConvTable();
};

