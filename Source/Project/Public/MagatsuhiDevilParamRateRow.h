#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MagatsuhiDevilParamRateRow.generated.h"

USTRUCT(BlueprintType)
struct FMagatsuhiDevilParamRateRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AbilityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EXPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MakkaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemRate;
    
    PROJECT_API FMagatsuhiDevilParamRateRow();
};

