#pragma once
#include "CoreMinimal.h"
#include "SkillTekisei.generated.h"

USTRUCT(BlueprintType)
struct FSkillTekisei {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_KoukaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_KoukaValue;
    
    PROJECT_API FSkillTekisei();
};

