#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RenzokuEncountCalcDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRenzokuEncountCalcDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RiveramaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AttenuationRatio;
    
    PROJECT_API FRenzokuEncountCalcDataTableRow();
};

