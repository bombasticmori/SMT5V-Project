#pragma once
#include "CoreMinimal.h"
#include "SortSaveBuffer.generated.h"

USTRUCT(BlueprintType)
struct FSortSaveBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_sortType;
    
    PROJECT_API FSortSaveBuffer();
};

