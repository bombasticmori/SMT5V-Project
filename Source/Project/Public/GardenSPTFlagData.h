#pragma once
#include "CoreMinimal.h"
#include "GardenSPTFlagData.generated.h"

USTRUCT(BlueprintType)
struct FGardenSPTFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_MessageTalkFlag;
    
    PROJECT_API FGardenSPTFlagData();
};

