#pragma once
#include "CoreMinimal.h"
#include "CoasterSaveBuffer.generated.h"

USTRUCT(BlueprintType)
struct FCoasterSaveBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Buffer;
    
    PROJECT_API FCoasterSaveBuffer();
};

