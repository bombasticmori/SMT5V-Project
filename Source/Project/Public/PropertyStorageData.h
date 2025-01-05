#pragma once
#include "CoreMinimal.h"
#include "PropertyStorageData.generated.h"

USTRUCT(BlueprintType)
struct FPropertyStorageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Storage;
    
    PROJECT_API FPropertyStorageData();
};

