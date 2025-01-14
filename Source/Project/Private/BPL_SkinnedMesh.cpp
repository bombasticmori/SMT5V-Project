#include "BPL_SkinnedMesh.h"

UBPL_SkinnedMesh::UBPL_SkinnedMesh() {
}

FTransform UBPL_SkinnedMesh::GetRefPoseTransform(const USkinnedMeshComponent* Target, FName BoneName) {
    if (!Target || !Target->SkeletalMesh) {
        return FTransform::Identity;
    }

    const int32 BoneIndex = Target->GetBoneIndex(BoneName);
    if (BoneIndex == INDEX_NONE) {
        return FTransform::Identity;
    }

    return Target->SkeletalMesh->GetRefSkeleton().GetRefBonePose()[BoneIndex];
}

float UBPL_SkinnedMesh::GetMaxDistanceFactor(const USkinnedMeshComponent* Component) {
    if (!Component) {
        return 0.0f;
    }

    return Component->Bounds.SphereRadius / Component->Bounds.BoxExtent.Size();
}

FTransform UBPL_SkinnedMesh::GetComposedRefPoseTransform(const USkinnedMeshComponent* Target, FName BoneName) {
    if (!Target || !Target->SkeletalMesh) {
        return FTransform::Identity;
    }

    int32 BoneIndex = Target->GetBoneIndex(BoneName);
    if (BoneIndex == INDEX_NONE) {
        return FTransform::Identity;
    }

    const FReferenceSkeleton& RefSkeleton = Target->SkeletalMesh->GetRefSkeleton();
    FTransform Transform = FTransform::Identity;
    while (BoneIndex != INDEX_NONE) {
        Transform = RefSkeleton.GetRefBonePose()[BoneIndex] * Transform;
        const int32 ParentIndex = RefSkeleton.GetParentIndex(BoneIndex);
        BoneIndex = ParentIndex;
    }

    return Transform;
}


