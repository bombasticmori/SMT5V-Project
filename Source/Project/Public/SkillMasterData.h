#pragma once
#include "CoreMinimal.h"
#include "SkillMasterData.generated.h"

USTRUCT(BlueprintType)
struct FSkillMasterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_Data;
    
    PROJECT_API FSkillMasterData();
};

