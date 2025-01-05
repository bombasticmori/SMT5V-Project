#pragma once
#include "CoreMinimal.h"
#include "PropertySaveData.generated.h"

USTRUCT(BlueprintType)
struct FPropertySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_PropertyData;
    
    PROJECT_API FPropertySaveData();
};

