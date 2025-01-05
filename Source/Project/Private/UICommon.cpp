#include "UICommon.h"

UUICommon::UUICommon() {
}

AActor* UUICommon::SpawnUIActor(UClass* pClass) {
    return NULL;
}

bool UUICommon::GeometryEquals(const FGeometry& A, const FGeometry& B) {
    return false;
}

FLinearColor UUICommon::CalcScreenToWidgetUVEx(const UCanvasPanel* Canvas, const FGeometry& Geometry, float& OutScale) {
    return FLinearColor{};
}

FLinearColor UUICommon::CalcScreenToWidgetUV(const UCanvasPanel* Canvas, const FGeometry& Geometry) {
    return FLinearColor{};
}

bool UUICommon::AddToWidgetPrio(UUserWidget* Widget, E_WIDGET_PRIO prio) {
    return false;
}


