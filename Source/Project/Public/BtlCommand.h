#pragma once
#include "CoreMinimal.h"
#include "E_BTL_AREA_TYPE.h"
#include "E_BTL_COMM_TYPE.h"
#include "E_BTL_WEAPON_TYPE.h"
#include "BtlCommand.generated.h"

USTRUCT(BlueprintType)
struct FBtlCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_COMM_TYPE m_Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_WEAPON_TYPE m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_AREA_TYPE m_TargetArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TargetForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Turn;
    
    PROJECT_API FBtlCommand();
};

