#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MinimapRadarEntry.h"
#include "MinimapRadarManager.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UMinimapRadarManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapRadarEntry> m_Entries;
    
public:
    UMinimapRadarManager();

};

