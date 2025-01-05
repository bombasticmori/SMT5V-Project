#pragma once
#include "CoreMinimal.h"
#include "BattleBossFlagData.generated.h"

USTRUCT(BlueprintType)
struct FBattleBossFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_Flag;
    
    PROJECT_API FBattleBossFlagData();
};

