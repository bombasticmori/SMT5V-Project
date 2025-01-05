#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintInputDelegateBinding -FallbackName=BlueprintInputDelegateBinding
#include "Engine/InputDelegateBinding.h"
#include "E_INPUT_TYPE.h"
#include "BlueprintActionPadDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FBlueprintActionPadDelegateBinding : public FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_INPUT_TYPE> InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    FBlueprintActionPadDelegateBinding();
};

