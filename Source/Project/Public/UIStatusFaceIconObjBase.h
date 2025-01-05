#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UIStatusFaceIconObjBase.generated.h"

UCLASS(Blueprintable)
class UUIStatusFaceIconObjBase : public UObject {
    GENERATED_BODY()
public:
    UUIStatusFaceIconObjBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetIconID(int32 posNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetCenterIndex() const;
    
};

