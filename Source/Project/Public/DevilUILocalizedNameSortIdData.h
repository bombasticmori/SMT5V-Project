#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DevilUILocalizedNameSortIdData.generated.h"

USTRUCT(BlueprintType)
struct FDevilUILocalizedNameSortIdData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NameSortId;
    
    PROJECT_API FDevilUILocalizedNameSortIdData();
};

