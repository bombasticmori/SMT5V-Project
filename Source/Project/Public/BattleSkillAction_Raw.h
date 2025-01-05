#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattleSkillAction_Raw.generated.h"

USTRUCT(BlueprintType)
struct FBattleSkillAction_Raw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> m_FilePath;
    
    PROJECT_API FBattleSkillAction_Raw();
};

