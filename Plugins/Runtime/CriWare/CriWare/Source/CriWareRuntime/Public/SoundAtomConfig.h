#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AtomCategoryInfoParam.h"
#include "SoundAtomConfig.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API USoundAtomConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AcfFilePath;
    
    USoundAtomConfig();

    UFUNCTION(BlueprintCallable)
    static TArray<FAtomCategoryInfoParam> GetCategoryInfoArray();
    
};

