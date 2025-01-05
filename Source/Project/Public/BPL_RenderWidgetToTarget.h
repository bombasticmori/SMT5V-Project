#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureFilter -FallbackName=TextureFilter
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BPL_RenderWidgetToTarget.generated.h"

class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(Blueprintable)
class UBPL_RenderWidgetToTarget : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_RenderWidgetToTarget();

    UFUNCTION(BlueprintCallable)
    static bool DrawWidgetToTargetTex(UTextureRenderTarget2D* target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSlateBrushByWidgetToRender2D(UUserWidget* InSourceWidget, UTextureRenderTarget2D* InRenderTarget, FSlateBrush& InBlush);
    
};

