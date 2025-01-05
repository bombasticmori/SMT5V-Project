#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ProjectDebugDraw.generated.h"

class UFont;

UCLASS(Blueprintable)
class PROJECT_API AProjectDebugDraw : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* m_FontObject;
    
public:
    AProjectDebugDraw(const FObjectInitializer& ObjectInitializer);

};

