#pragma once
#include "CoreMinimal.h"
#include "ItemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FItemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_HaveItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_Get;
    
    PROJECT_API FItemSaveData();
};

