#include "CameraDitherVisualizer.h"

ACameraDitherVisualizer::ACameraDitherVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaskedCollisionChannel = ECC_WorldStatic;
    this->GoodMaterial = NULL;
    this->BadMaterial = NULL;
}

void ACameraDitherVisualizer::VisualizeMaskableMeshes() {
}

void ACameraDitherVisualizer::UnvisualizeMaskableMeshes() {
}

void ACameraDitherVisualizer::FindValidDitherTargets() {
}


