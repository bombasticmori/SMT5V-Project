#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_UI_FADE_STATE.h"
#include "ScreenTransitionBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AScreenTransitionBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_UI_FADE_STATE m_fadeState;
    
public:
    AScreenTransitionBase(const FObjectInitializer& ObjectInitializer);

};

