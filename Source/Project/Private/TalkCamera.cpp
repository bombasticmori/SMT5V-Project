#include "TalkCamera.h"

ATalkCamera::ATalkCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ATalkCamera::UpdateTableParam(int32 tableIndex) {
}

void ATalkCamera::UpdateParam(float TargetHeight) {
}

void ATalkCamera::SetOffset(const FTalkCameraParam& Offset) {
}

void ATalkCamera::PrintOffsetCameraTable(int32 tableIndex, E_TALK_CAMERA_DATA_TYPE DebugDataType, E_TALK_CAMERA_MODEL_HIDE DebugModelHide) {
}

void ATalkCamera::MakeUpCameraTable(UObject* pObject) {
}

FTalkCameraParam ATalkCamera::GetMythFriendUpParam(int32 tableIndex) const {
    return FTalkCameraParam{};
}

E_TALK_CAMERA_MODEL_HIDE ATalkCamera::GetCameraTableModelHide(int32 tableIndex) {
    return E_TALK_CAMERA_MODEL_HIDE::E_NONE;
}

E_TALK_CAMERA_DATA_TYPE ATalkCamera::GetCameraTableDataType(int32 tableIndex) {
    return E_TALK_CAMERA_DATA_TYPE::E_NONE;
}

FTalkCameraParam ATalkCamera::GetCameraTableData(int32 tableIndex) const {
    return FTalkCameraParam{};
}

void ATalkCamera::CalcUniqueSkillCamera(UDataTable* DataTable, int32 UniqueSkillDevilId, float TargetHeight, FVector& OutLocation, FVector& OutRotation) {
}


