#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DynamicBlueprintBinding -FallbackName=DynamicBlueprintBinding
#include "Engine/DynamicBlueprintBinding.h"
#include "BlueprintActionPadDelegateBinding.h"
#include "ActionPadDelegateBinding.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UActionPadDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintActionPadDelegateBinding> ActionPadDelegateBindings;
    
    UActionPadDelegateBinding();

};

