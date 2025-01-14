#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DevilPosData_Raw.h"
#include "DevilAssetTable_Raw.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDevilAssetTable_Raw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ClassAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> PlayerBaseAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DMAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDevilPosData_Raw DevilPostData;
    
    PROJECT_API FDevilAssetTable_Raw();
};

