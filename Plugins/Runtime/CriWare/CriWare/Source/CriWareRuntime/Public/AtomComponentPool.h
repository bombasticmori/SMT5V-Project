#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AtomComponentPool.generated.h"

class UAtomComponent;

UCLASS(Blueprintable, MinimalAPI)
class UAtomComponentPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> Pool;
    
public:
    UAtomComponentPool();

};

