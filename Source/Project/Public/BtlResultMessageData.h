#pragma once
#include "CoreMinimal.h"
#include "BtlResultMessageData.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_GetProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AddStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AddStockSpace;
    
    PROJECT_API FBtlResultMessageData();
};

