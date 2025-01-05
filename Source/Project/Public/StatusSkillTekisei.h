#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_ICON.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "StatusSkillTekisei.generated.h"

USTRUCT(BlueprintType)
struct FStatusSkillTekisei {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_SKILL_TEKISEI_CATEGORY m_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TekiseiCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BuildTekiseiCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_SKILL_ICON m_IconID;
    
    PROJECT_API FStatusSkillTekisei();
};

