#pragma once
#include "CoreMinimal.h"
#include "TransportLocationSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FTransportLocationSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActiveSlot;
    
    PROJECT_API FTransportLocationSlotInfo();
};

