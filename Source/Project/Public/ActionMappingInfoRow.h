#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputCore.h"
#include "E_ACTION_MAPPING_TYPE.h"
#include "ActionMappingInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FActionMappingInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MainKey;
    
    PROJECT_API FActionMappingInfoRow();
};

