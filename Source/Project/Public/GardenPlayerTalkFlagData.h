#pragma once
#include "CoreMinimal.h"
#include "GardenPlayerTalkFlagData.generated.h"

USTRUCT(BlueprintType)
struct FGardenPlayerTalkFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Flag1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Flag2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Flag3;
    
    PROJECT_API FGardenPlayerTalkFlagData();
};

