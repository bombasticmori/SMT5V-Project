#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "S5LoadObject.generated.h"

UCLASS(Blueprintable)
class PROJECT_API US5LoadObject : public USaveGame {
    GENERATED_BODY()
public:
    US5LoadObject();

};

