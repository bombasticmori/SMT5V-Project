#pragma once
#include "CoreMinimal.h"
#include "BtnHelpTblInfo.h"
#include "BtnHelpTblInfoList.generated.h"

USTRUCT(BlueprintType)
struct FBtnHelpTblInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtnHelpTblInfo> HelpInfo;
    
    PROJECT_API FBtnHelpTblInfoList();
};

