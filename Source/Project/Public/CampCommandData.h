#pragma once
#include "CoreMinimal.h"
#include "E_CAMP_COMMAND_ID.h"
#include "CampCommandData.generated.h"

USTRUCT(BlueprintType)
struct FCampCommandData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CAMP_COMMAND_ID m_CommandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_OpenFlag;
    
    PROJECT_API FCampCommandData();
};

