#pragma once
#include "CoreMinimal.h"
#include "PropertyItemData.generated.h"

USTRUCT(BlueprintType)
struct FPropertyItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    PROJECT_API FPropertyItemData();
};

