#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UIStatusFaceIconList.generated.h"

UINTERFACE(Blueprintable)
class UUIStatusFaceIconList : public UInterface {
    GENERATED_BODY()
};

class IUIStatusFaceIconList : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetIconID(int32 posNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCenterIndex() const;
    
};

