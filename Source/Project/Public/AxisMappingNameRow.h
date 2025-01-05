#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "E_AXIS_MAPPING_TYPE.h"
#include "AxisMappingNameRow.generated.h"

USTRUCT(BlueprintType)
struct FAxisMappingNameRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_AXIS_MAPPING_TYPE> EnumValue;
    
    PROJECT_API FAxisMappingNameRow();
};

