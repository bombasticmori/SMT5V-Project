#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "E_ACTION_MAPPING_TYPE.h"
#include "ActionMappingNameRow.generated.h"

USTRUCT(BlueprintType)
struct FActionMappingNameRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_ACTION_MAPPING_TYPE> EnumValue;
    
    PROJECT_API FActionMappingNameRow();
};

