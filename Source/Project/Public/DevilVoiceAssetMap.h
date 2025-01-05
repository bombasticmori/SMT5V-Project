#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DevilVoiceContainer.h"
#include "DevilVoiceAssetMap.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UDevilVoiceAssetMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDevilVoiceContainer> DevilMap;
    
    UDevilVoiceAssetMap();

};

