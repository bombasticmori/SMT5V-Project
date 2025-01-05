#pragma once
#include "CoreMinimal.h"
#include "E_BTN_HELP_MAPPING_KEY_TYPE.h"
#include "BtnHelpInfo.generated.h"

USTRUCT(BlueprintType)
struct FBtnHelpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTN_HELP_MAPPING_KEY_TYPE MappingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HelpMsg;
    
    PROJECT_API FBtnHelpInfo();
};

