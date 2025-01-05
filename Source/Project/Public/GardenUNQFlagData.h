#pragma once
#include "CoreMinimal.h"
#include "GardenUNQFlagData.generated.h"

USTRUCT(BlueprintType)
struct FGardenUNQFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_MessageTalkFlag;
    
    PROJECT_API FGardenUNQFlagData();
};

