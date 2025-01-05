#pragma once
#include "CoreMinimal.h"
#include "TreeDitherData.generated.h"

USTRUCT(BlueprintType)
struct FTreeDitherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NearCameraOnly;
    
    PROJECT_API FTreeDitherData();
};

