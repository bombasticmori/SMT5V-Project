#include "MapCharaPanelCtrlBase.h"

AMapCharaPanelCtrlBase::AMapCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AMapCharaPanelCtrlBase::StopMapCharaPanelAnimation() {
    return false;
}

bool AMapCharaPanelCtrlBase::StartMapCharaPanelFadeOutAnimation() {
    return false;
}

bool AMapCharaPanelCtrlBase::StartMapCharaPanelAnimation() {
    return false;
}

bool AMapCharaPanelCtrlBase::IsMapCharaPanelAnimation() {
    return false;
}




