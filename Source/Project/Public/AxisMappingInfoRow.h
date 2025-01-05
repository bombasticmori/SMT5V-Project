#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "E_AXIS_MAPPING_TYPE.h"
#include "AxisMappingInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FAxisMappingInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MainKey;
    
    PROJECT_API FAxisMappingInfoRow();
};

