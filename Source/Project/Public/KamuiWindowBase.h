#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_KAMUI_UI_INPUT_TYPE.h"
#include "E_KAMUI_UI_USE_KEY.h"
#include "KamuiWindowBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AKamuiWindowBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_KAMUI_UI_INPUT_TYPE m_KamuiWIndowInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_KAMUI_UI_USE_KEY m_KamuiWIndowInputKey;
    
    AKamuiWindowBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateKamuiWindowInputInfo();
    
};

