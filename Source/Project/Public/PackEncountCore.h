#pragma once
#include "CoreMinimal.h"
#include "PackEncountCore.generated.h"

USTRUCT(BlueprintType)
struct FPackEncountCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Encount_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Rate;
    
    PROJECT_API FPackEncountCore();
};

