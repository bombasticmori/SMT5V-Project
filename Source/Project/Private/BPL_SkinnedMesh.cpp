#include "BPL_SkinnedMesh.h"

UBPL_SkinnedMesh::UBPL_SkinnedMesh() {
}

FTransform UBPL_SkinnedMesh::GetRefPoseTransform(const USkinnedMeshComponent* target, FName BoneName) {
    return FTransform{};
}

float UBPL_SkinnedMesh::GetMaxDistanceFactor(const USkinnedMeshComponent* Component) {
    return 0.0f;
}

FTransform UBPL_SkinnedMesh::GetComposedRefPoseTransform(const USkinnedMeshComponent* target, FName BoneName) {
    return FTransform{};
}


