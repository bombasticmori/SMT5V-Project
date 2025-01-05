#pragma once
#include "CoreMinimal.h"
#include "E_ACTION_MAPPING_TYPE.h"
#include "E_BTL_UI_COMMAND.h"
#include "E_INPUT_TYPE.h"
#include "BtlCommandUIData.generated.h"

USTRUCT(BlueprintType)
struct FBtlCommandUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_UI_COMMAND m_CommId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsActionOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_ACTION_MAPPING_TYPE> m_ActMappingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_INPUT_TYPE> m_InputType;
    
    PROJECT_API FBtlCommandUIData();
};

