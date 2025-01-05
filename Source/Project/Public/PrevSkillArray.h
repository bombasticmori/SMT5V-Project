#pragma once
#include "CoreMinimal.h"
#include "PrevSkillArray.generated.h"

USTRUCT(BlueprintType)
struct FPrevSkillArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_SkillIDArray;
    
    PROJECT_API FPrevSkillArray();
};

