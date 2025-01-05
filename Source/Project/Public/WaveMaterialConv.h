#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WaveMaterialConv.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct PROJECT_API FWaveMaterialConv : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_SrcMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_WaveMaterial;
    
    FWaveMaterialConv();
};

