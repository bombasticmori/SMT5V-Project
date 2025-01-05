#pragma once
#include "CoreMinimal.h"
#include "ActionKeyConfigSaveData.generated.h"

USTRUCT(BlueprintType)
struct FActionKeyConfigSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_KeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActionMappingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Change;
    
    PROJECT_API FActionKeyConfigSaveData();
};

