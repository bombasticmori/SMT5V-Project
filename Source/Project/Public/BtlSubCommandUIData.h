#pragma once
#include "CoreMinimal.h"
#include "BtlCommandUIData.h"
#include "E_BTL_SUB_COMMAND_TYPE.h"
#include "BtlSubCommandUIData.generated.h"

USTRUCT(BlueprintType)
struct FBtlSubCommandUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_SUB_COMMAND_TYPE m_CommandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlCommandUIData m_CommandData;
    
    PROJECT_API FBtlSubCommandUIData();
};

