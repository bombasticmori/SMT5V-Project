#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MinimapFootprintEntry.h"
#include "MinimapFootprintManager.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UMinimapFootprintManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapFootprintEntry> m_Entries;
    
    UMinimapFootprintManager();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
};

