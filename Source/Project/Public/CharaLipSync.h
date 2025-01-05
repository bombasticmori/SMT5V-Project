#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharaLipSyncKey.h"
#include "CharaLipSync.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UCharaLipSync : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaLipSyncKey> KeyList;
    
    UCharaLipSync();

};

