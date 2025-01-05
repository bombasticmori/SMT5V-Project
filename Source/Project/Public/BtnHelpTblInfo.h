#pragma once
#include "CoreMinimal.h"
#include "E_BTN_HELP_MAPPING_KEY_TYPE.h"
#include "E_BTN_HELP_MSG_TYPE.h"
#include "BtnHelpTblInfo.generated.h"

USTRUCT(BlueprintType)
struct FBtnHelpTblInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTN_HELP_MAPPING_KEY_TYPE MappingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTN_HELP_MSG_TYPE MsgType;
    
    PROJECT_API FBtnHelpTblInfo();
};

