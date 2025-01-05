#pragma once
#include "CoreMinimal.h"
#include "SkillTekisei.h"
#include "SkillTekiseiArray.generated.h"

USTRUCT(BlueprintType)
struct FSkillTekiseiArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillTekisei> m_Data;
    
    PROJECT_API FSkillTekiseiArray();
};

