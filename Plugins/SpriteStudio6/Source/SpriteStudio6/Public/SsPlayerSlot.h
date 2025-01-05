#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PanelSlot -FallbackName=PanelSlot
#include "CoreUObject.h"
#include "UMG.h"
#include "SsPlayerSlot.generated.h"

UCLASS(Blueprintable)
class SPRITESTUDIO6_API USsPlayerSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReflectPartAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePartSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PartSize;
    
    USsPlayerSlot();

    UFUNCTION(BlueprintCallable)
    void SetAttachPart(FName InNewPartName);
    
};

