#pragma once
#include "CoreMinimal.h"
#include "BtlGardenPointData.generated.h"

USTRUCT(BlueprintType)
struct FBtlGardenPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EvtID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsMagatsuka;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsMagatsuhiDevil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HighestEnemyLevel;
    
    PROJECT_API FBtlGardenPointData();
};

