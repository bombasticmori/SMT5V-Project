#pragma once
#include "CoreMinimal.h"
#include "MagatsuhiSkillData.generated.h"

USTRUCT(BlueprintType)
struct FMagatsuhiSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_SkillId;
    
    PROJECT_API FMagatsuhiSkillData();
};

