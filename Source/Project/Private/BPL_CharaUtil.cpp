#include "BPL_CharaUtil.h"

UBPL_CharaUtil::UBPL_CharaUtil() {
}

int32 UBPL_CharaUtil::SetUpState_inner(TArray<E_BAD_STATUS> BadStatus) {
    return 0;
}

void UBPL_CharaUtil::PickUpSurfaceStatus_inner(int32 State, E_BAD_STATUS BeforeStatus, E_BAD_STATUS& ret, bool& IsNeedResetMaterial) {
}

TArray<E_BAD_STATUS> UBPL_CharaUtil::PickUpStatus_inner(int32 State) {
    return TArray<E_BAD_STATUS>();
}

bool UBPL_CharaUtil::LoadDevilAssetTableRawData(UDataTable* DataTable, TMap<int32, FDevilAssetTable_Raw>& OutMap) {
    return false;
}

void UBPL_CharaUtil::GetSyncGroupPosition(const UAnimInstance* AnimInstance, const FName& GroupName, FName& OutPreviousMarkerName, FName& OutNextMarkerName, float& OutPositionBetweenMarkers) {
}

int32 UBPL_CharaUtil::GetLODLevel(USkinnedMeshComponent* Mesh)
{
    if (!Mesh)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetLODLevel: Invalid Skinned Mesh Component."));
        return -1; // Return -1 to indicate an error.
    }

    // Retrieve the current LOD index
    return Mesh->GetPredictedLODLevel();
}


int32 UBPL_CharaUtil::GetCalcIKLevel(USkinnedMeshComponent* Mesh) {
    return 0;
}

int32 UBPL_CharaUtil::FindOriginalDevilIByRawMap(int32 DevilID, const TMap<int32, FDevilAssetTable_Raw>& RawMap) {
    return 0;
}


