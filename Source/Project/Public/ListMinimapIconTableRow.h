#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ListMinimapIconTableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FListMinimapIconTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    PROJECT_API FListMinimapIconTableRow();
};

