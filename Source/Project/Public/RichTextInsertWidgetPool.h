#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RichTextInsertWidgetPool.generated.h"

class UBtnHelp_ActionMappingIconBase;

UCLASS(Blueprintable)
class PROJECT_API ARichTextInsertWidgetPool : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtnHelp_ActionMappingIconBase* m_ActionMappingIcon;
    
    ARichTextInsertWidgetPool(const FObjectInitializer& ObjectInitializer);

};

