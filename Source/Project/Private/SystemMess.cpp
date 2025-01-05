#include "SystemMess.h"

ASystemMess::ASystemMess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ASystemMess::MakeUp(UScriptMessageAsset* pText) {
    return false;
}

FText ASystemMess::GetText(const int32 Index) {
    return FText::GetEmpty();
}

void ASystemMess::Finalize() {
}


