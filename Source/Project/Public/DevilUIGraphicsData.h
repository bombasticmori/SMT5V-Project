#pragma once
#include "CoreMinimal.h"
#include "DevilUIGraphicsData.generated.h"

USTRUCT(BlueprintType)
struct FDevilUIGraphicsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FaceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NameSortId;
    
    PROJECT_API FDevilUIGraphicsData();
};

