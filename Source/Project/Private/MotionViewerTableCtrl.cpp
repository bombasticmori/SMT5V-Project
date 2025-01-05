#include "MotionViewerTableCtrl.h"

UMotionViewerTableCtrl::UMotionViewerTableCtrl() {
    this->m_TableData = NULL;
}

void UMotionViewerTableCtrl::StartCreateTableBlocking(const TArray<FName> PackagePath) {
}

void UMotionViewerTableCtrl::StartCreateTable(const TArray<FName> PackagePath) {
}

bool UMotionViewerTableCtrl::isRunCreateTable() {
    return false;
}


