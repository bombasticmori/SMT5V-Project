#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "DebugCameraManager.generated.h"

class AProjectDebugCameraController;

UCLASS(Blueprintable)
class PROJECT_API UDebugCameraManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProjectDebugCameraController* ProjectDebugCameraControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectDebugCameraController> ProjectDebugCameraControllerClass;
    
    UDebugCameraManager();

};

