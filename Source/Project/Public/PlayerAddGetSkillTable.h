#pragma once
#include "CoreMinimal.h"
#include "AddGetSkill.h"
#include "PlayerAddGetSkillTable.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAddGetSkillTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddGetSkill> m_Data;
    
    PROJECT_API FPlayerAddGetSkillTable();
};

