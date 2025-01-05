#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MinimapIconTableRow.h"
#include "MinimapIconTableInterface.generated.h"

UINTERFACE(Blueprintable)
class UMinimapIconTableInterface : public UInterface {
    GENERATED_BODY()
};

class IMinimapIconTableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMinimapIconTableRow(int32 Index, FMinimapIconTableRow& OutRow, bool& NeedToAddMore);
    
};

