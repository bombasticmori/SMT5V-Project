#include "BPL_RenderWidgetToTarget.h"

UBPL_RenderWidgetToTarget::UBPL_RenderWidgetToTarget() {
}

bool UBPL_RenderWidgetToTarget::DrawWidgetToTargetTex(UTextureRenderTarget2D* target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime) {
    return false;
}

void UBPL_RenderWidgetToTarget::CreateSlateBrushByWidgetToRender2D(UUserWidget* InSourceWidget, UTextureRenderTarget2D* InRenderTarget, FSlateBrush& InBlush) {
}


