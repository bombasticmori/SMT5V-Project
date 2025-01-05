#pragma once
#include "CoreMinimal.h"
#include "MimanSaveBuffer.generated.h"

USTRUCT(BlueprintType)
struct FMimanSaveBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Buffer;
    
    PROJECT_API FMimanSaveBuffer();
};

