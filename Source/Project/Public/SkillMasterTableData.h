#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_MASTER_COND.h"
#include "E_SKILL_MASTER_EFT.h"
#include "E_SKILL_MASTER_TARGET.h"
#include "SkillMasterTableData.generated.h"

USTRUCT(BlueprintType)
struct FSkillMasterTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_SKILL_MASTER_COND m_Cond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_SKILL_MASTER_TARGET m_Tgt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_SKILL_MASTER_EFT m_Eft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HitEffect;
    
    PROJECT_API FSkillMasterTableData();
};

