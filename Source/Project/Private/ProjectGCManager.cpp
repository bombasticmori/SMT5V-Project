#include "ProjectGCManager.h"

UProjectGCManager::UProjectGCManager() {
    this->CollectObjectCount = 7000;
}

void UProjectGCManager::ReleaseAndCollectResidentAssets(FCollectFinishedSignature OnReleased) {
}

bool UProjectGCManager::IsCompletedLoadResidentAssets() const {
    return false;
}

UProjectGCManager* UProjectGCManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UProjectGCManager::Collect(const FString& LogKeyword, EGCPriority Priority) {
}

void UProjectGCManager::AsyncLoadResidentAssets() {
}


