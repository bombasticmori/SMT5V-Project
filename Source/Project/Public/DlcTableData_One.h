#pragma once
#include "CoreMinimal.h"
#include "DlcTableData_One.generated.h"

USTRUCT(BlueprintType)
struct FDlcTableData_One {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformContentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StoreID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableContent;
    
    PROJECT_API FDlcTableData_One();
};

