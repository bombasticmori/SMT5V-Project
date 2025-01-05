#include "TransportListCtrlBase.h"

ATransportListCtrlBase::ATransportListCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ATransportListCtrlBase::ResetListInfo() {
}

TArray<FTransportLocationSlotInfo> ATransportListCtrlBase::GetListInfo_InRange(int32 StartIdx, int32 EndIdx) {
    return TArray<FTransportLocationSlotInfo>();
}

TArray<FTransportLocationSlotInfo> ATransportListCtrlBase::GetListInfo_All() {
    return TArray<FTransportLocationSlotInfo>();
}

void ATransportListCtrlBase::AddListInfo(FText InLocationName, bool InActiveSlot) {
}


