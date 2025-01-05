#pragma once
#include "CoreMinimal.h"
#include "DlcSubIdTableData_One.generated.h"

USTRUCT(BlueprintType)
struct FDlcSubIdTableData_One {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameTag;
    
    PROJECT_API FDlcSubIdTableData_One();
};

