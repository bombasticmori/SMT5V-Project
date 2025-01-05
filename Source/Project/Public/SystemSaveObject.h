#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SystemSaveObject.generated.h"

UCLASS(Blueprintable)
class PROJECT_API USystemSaveObject : public USaveGame {
    GENERATED_BODY()
public:
    USystemSaveObject();

};

