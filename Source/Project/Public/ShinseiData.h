#pragma once
#include "CoreMinimal.h"
#include "ShinseiData.generated.h"

USTRUCT(BlueprintType)
struct FShinseiData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    PROJECT_API FShinseiData();
};

