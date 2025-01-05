#include "BPL_StaffRollData.h"

UBPL_StaffRollData::UBPL_StaffRollData() {
}

FString UBPL_StaffRollData::GetTitleName(int32 ID) {
    return TEXT("");
}

UTexture2D* UBPL_StaffRollData::GetTexture(int32 ID) {
    return NULL;
}

float UBPL_StaffRollData::GetStaffRollLength() {
    return 0.0f;
}

int32 UBPL_StaffRollData::GetStaffRollDataMax() {
    return 0;
}

FStaffRollData UBPL_StaffRollData::GetStaffRollData(int32 ID) {
    return FStaffRollData{};
}

FString UBPL_StaffRollData::GetRightName(int32 ID) {
    return TEXT("");
}

FString UBPL_StaffRollData::GetOrganizationName(int32 ID) {
    return TEXT("");
}

float UBPL_StaffRollData::GetNowPosition(float Length) {
    return 0.0f;
}

float UBPL_StaffRollData::GetNowLength(float Position) {
    return 0.0f;
}

float UBPL_StaffRollData::GetLineSpace(int32 ID) {
    return 0.0f;
}

FString UBPL_StaffRollData::GetLeftName(int32 ID) {
    return TEXT("");
}

float UBPL_StaffRollData::GetAddLength(int32 ID) {
    return 0.0f;
}

int32 UBPL_StaffRollData::CalcStartDataNo(float Position, float Height) {
    return 0;
}

float UBPL_StaffRollData::CalcSpeed(float sec) {
    return 0.0f;
}

float UBPL_StaffRollData::CalcMovieTime(float speed) {
    return 0.0f;
}


