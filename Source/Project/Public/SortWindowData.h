#pragma once
#include "CoreMinimal.h"
#include "SortWindowData.generated.h"

USTRUCT(BlueprintType)
struct FSortWindowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_SelectSortIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_SelectSortOrder;
    
    PROJECT_API FSortWindowData();
};

