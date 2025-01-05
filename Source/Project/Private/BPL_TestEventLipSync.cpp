#include "BPL_TestEventLipSync.h"
#include "Templates/SubclassOf.h"

UBPL_TestEventLipSync::UBPL_TestEventLipSync() {
}

void UBPL_TestEventLipSync::SetLODBias(const int32 LODGroup, const int32 LODBias) {
}

void UBPL_TestEventLipSync::LogTextureLODInfo() {
}

FString UBPL_TestEventLipSync::GetTextureGroupName(const int32 LODGroup) {
    return TEXT("");
}

int32 UBPL_TestEventLipSync::GetLODBias(const int32 LODGroup) {
    return 0;
}

TSubclassOf<AActor> UBPL_TestEventLipSync::GetAssetClass(UObject* Object) {
    return NULL;
}

void UBPL_TestEventLipSync::Debug_RecreateSamplerStates(TEnumAsByte<TextureGroup> LODGroup, float MipMapBias) {
}

int32 UBPL_TestEventLipSync::ClampLODGroup(int32 LODGroup) {
    return 0;
}


