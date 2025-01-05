#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameFramework/SaveGame.h"
#include "SystemLocalSaveObject.generated.h"

UCLASS(Blueprintable)
class PROJECT_API USystemLocalSaveObject : public USaveGame {
    GENERATED_BODY()
public:
    USystemLocalSaveObject();

};

