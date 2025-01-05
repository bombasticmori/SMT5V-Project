#pragma once
#include "CoreMinimal.h"
#include "RelicSaveBuffer.generated.h"

USTRUCT(BlueprintType)
struct FRelicSaveBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Buffer;
    
    PROJECT_API FRelicSaveBuffer();
};

