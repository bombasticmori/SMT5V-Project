#pragma once
#include "CoreMinimal.h"
#include "DebugBtlAITempViewData.generated.h"

USTRUCT(BlueprintType)
struct FDebugBtlAITempViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dispName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param;
    
    PROJECT_API FDebugBtlAITempViewData();
};

