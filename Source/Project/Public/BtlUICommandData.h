#pragma once
#include "CoreMinimal.h"
#include "E_ACTION_MAPPING_TYPE.h"
#include "E_BTL_UI_COMMAND.h"
#include "E_INPUT_TYPE.h"
#include "BtlUICommandData.generated.h"

USTRUCT(BlueprintType)
struct FBtlUICommandData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_UI_COMMAND m_CommId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_ACTION_MAPPING_TYPE> m_ActMappingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsLButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_INPUT_TYPE> m_InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsHiddenTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsLockKey;
    
    PROJECT_API FBtlUICommandData();
};

