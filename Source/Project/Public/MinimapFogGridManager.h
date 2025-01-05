#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MinimapFogGridManager.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class PROJECT_API UMinimapFogGridManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* m_Texture;
    
public:
    UMinimapFogGridManager();

};

