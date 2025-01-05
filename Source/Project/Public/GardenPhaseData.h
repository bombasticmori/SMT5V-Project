#pragma once
#include "CoreMinimal.h"
#include "GardenPhaseData.generated.h"

USTRUCT(BlueprintType)
struct FGardenPhaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_StartFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_EndFlags;
    
    PROJECT_API FGardenPhaseData();
};

