#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharaBlinkKey.h"
#include "CharaBlink.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UCharaBlink : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaBlinkKey> KeyList;
    
    UCharaBlink();

};

