#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "GameFramework/SpectatorPawn.h"
#include "GardenFreeCameraPawn.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class PROJECT_API AGardenFreeCameraPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* FreeCamCollisionComponent;
    
public:
    AGardenFreeCameraPawn(const FObjectInitializer& ObjectInitializer);

};

