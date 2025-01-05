#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MinimapCoasterLineMinimap.generated.h"

class UImage;

UCLASS(Blueprintable)
class PROJECT_API UMinimapCoasterLineMinimap : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Image;
    
public:
    UMinimapCoasterLineMinimap();

};

