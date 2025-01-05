#pragma once
#include "CoreMinimal.h"
#include "AxisKeyConfigSaveData.generated.h"

USTRUCT(BlueprintType)
struct FAxisKeyConfigSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_KeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AxisMappingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Change;
    
    PROJECT_API FAxisKeyConfigSaveData();
};

