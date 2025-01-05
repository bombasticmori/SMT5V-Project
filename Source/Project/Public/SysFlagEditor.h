#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SysFlagEditor.generated.h"

UCLASS(Blueprintable)
class ASysFlagEditor : public AActor {
    GENERATED_BODY()
public:
    ASysFlagEditor(const FObjectInitializer& ObjectInitializer);

};

