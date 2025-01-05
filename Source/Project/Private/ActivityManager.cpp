#include "ActivityManager.h"

UActivityManager::UActivityManager() {
}

void UActivityManager::ResetCardType() {
}

EActivityType UActivityManager::GetCardType() {
    return EActivityType::Act_None;
}

UActivityManager* UActivityManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


