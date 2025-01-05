#pragma once
#include "CoreMinimal.h"
#include "MimanData.generated.h"

USTRUCT(BlueprintType)
struct FMimanData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Miitsu;
    
    PROJECT_API FMimanData();
};

