#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_LIB_CATEGORY.h"
#include "SkillLibListData.generated.h"

USTRUCT(BlueprintType)
struct FSkillLibListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_SKILL_LIB_CATEGORY m_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_SkillIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ListNum;
    
    PROJECT_API FSkillLibListData();
};

