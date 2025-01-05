#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveObject.generated.h"

UCLASS(Blueprintable)
class PROJECT_API USaveObject : public USaveGame {
    GENERATED_BODY()
public:
    USaveObject();

};

