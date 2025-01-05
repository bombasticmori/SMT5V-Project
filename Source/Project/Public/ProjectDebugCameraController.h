#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugCameraController -FallbackName=DebugCameraController
#include "Engine/DebugCameraController.h"
#include "DebugCameraInputSignatureDelegate.h"
#include "ProjectDebugCameraController.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AProjectDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCameraInputSignature OnInputTriggered;
    
    AProjectDebugCameraController(const FObjectInitializer& ObjectInitializer);

};

