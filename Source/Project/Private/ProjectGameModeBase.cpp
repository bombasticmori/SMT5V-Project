#include "ProjectGameModeBase.h"
#include "GazeTargetHolder.h"

AProjectGameModeBase::AProjectGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapEventManager = NULL;
    this->IsEditorNoDebugMenu = false;
    this->GazeTargetHolderClass = UGazeTargetHolder::StaticClass();
    this->GazeTargetHolder = NULL;
}

void AProjectGameModeBase::TestCrash() {
}

bool AProjectGameModeBase::ProjectIsMenuDisabledByReason(const UObject* WorldContextObject, EDisableMenuReason DisableMenuReason) {
    return false;
}

bool AProjectGameModeBase::ProjectIsMenuDisabled(const UObject* WorldContextObject) {
    return false;
}

void AProjectGameModeBase::ProjectEnableMenuAll(const UObject* WorldContextObject) {
}

void AProjectGameModeBase::ProjectEnableMenu(const UObject* WorldContextObject, const EDisableMenuReason DisableMenuReason) {
}

void AProjectGameModeBase::ProjectDisableMenu(const UObject* WorldContextObject, const EDisableMenuReason DisableMenuReason) {
}


bool AProjectGameModeBase::IsSpawnDebugMenu(const UObject* WorldContextObject) {
    return false;
}

UGazeTargetHolder* AProjectGameModeBase::GetGazeTargetHolder(const UObject* WorldContextObject) {
    return NULL;
}




