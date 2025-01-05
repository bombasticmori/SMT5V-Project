#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CoreUObject.h"
#include "SsAlphaBlendModeMaterials.h"
#include "SsGameSettings.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SPRITESTUDIO6_API USsGameSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsAlphaBlendModeMaterials Component_Default;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsAlphaBlendModeMaterials Component_Masked;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsAlphaBlendModeMaterials UMG_Default;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsAlphaBlendModeMaterials UMG_Masked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* S5_ScreenMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Component_OffScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UMG_OffScreen;
    
    USsGameSettings();

};

