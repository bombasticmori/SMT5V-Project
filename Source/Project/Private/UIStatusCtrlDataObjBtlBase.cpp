#include "UIStatusCtrlDataObjBtlBase.h"

UUIStatusCtrlDataObjBtlBase::UUIStatusCtrlDataObjBtlBase() {
}

bool UUIStatusCtrlDataObjBtlBase::UseDedicatedDropData_Implementation(const int32 Index) {
    return false;
}

bool UUIStatusCtrlDataObjBtlBase::UseDedicatedAnalyzeData_Implementation(const int32 Index) {
    return false;
}

void UUIStatusCtrlDataObjBtlBase::SetUIObjBtlCharaStatus(FBtlParty& in_btlParty, bool isEnemy) {
}

bool UUIStatusCtrlDataObjBtlBase::RebuildCharaList_Implementation(const TArray<uint8>& enemyList, const TArray<uint8>& partyList, const TArray<uint8>& stockList) {
    return false;
}

bool UUIStatusCtrlDataObjBtlBase::IsBossChallangeMode_Implementation() {
    return false;
}

void UUIStatusCtrlDataObjBtlBase::GetSatanAnalyzeData(FAnalyzeData& Data, const int32 DevilID) {
}

TArray<int32> UUIStatusCtrlDataObjBtlBase::GetMagatsuhiSkillData_Implementation(const int32 Index) {
    return TArray<int32>();
}

TArray<int32> UUIStatusCtrlDataObjBtlBase::GetMagaSkillSupporters_Implementation(const int32 Index) {
    return TArray<int32>();
}

TArray<int32> UUIStatusCtrlDataObjBtlBase::GetDedicatedDropData_Implementation(const int32 Index) {
    return TArray<int32>();
}

void UUIStatusCtrlDataObjBtlBase::GetAnalyzeData_Implementation(const int32 Index, FAnalyzeData& AnalyzeData) {
}

void UUIStatusCtrlDataObjBtlBase::CreateCharaList(const TArray<uint8>& srcList, TArray<int32>& dstList) {
}


