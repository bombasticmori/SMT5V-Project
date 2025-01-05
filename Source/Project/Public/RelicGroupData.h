#pragma once
#include "CoreMinimal.h"
#include "RelicGroupData.generated.h"

USTRUCT(BlueprintType)
struct FRelicGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Rate;
    
    PROJECT_API FRelicGroupData();
};

