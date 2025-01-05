#pragma once
#include "CoreMinimal.h"
#include "EndureWeakData.generated.h"

USTRUCT(BlueprintType)
struct FEndureWeakData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Endure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Weak;
    
    PROJECT_API FEndureWeakData();
};

