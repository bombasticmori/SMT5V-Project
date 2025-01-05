#pragma once
#include "CoreMinimal.h"
#include "BtlResultMakkaData.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultMakkaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PreMakka;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GetMakka;
    
    PROJECT_API FBtlResultMakkaData();
};

