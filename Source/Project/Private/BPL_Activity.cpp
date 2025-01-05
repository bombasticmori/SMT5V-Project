#include "BPL_Activity.h"

UBPL_Activity::UBPL_Activity() {
}

void UBPL_Activity::StartActivity(const EActivityType _activityType, const UObject* WorldContextObject) {
}

void UBPL_Activity::SetActivityFromMapEvent(int32 _mapEventID, const UObject* WorldContextObject) {
}

void UBPL_Activity::SetActivityFromId(EActivityType _activity, EActivityTaskID _task, const UObject* WorldContextObject) {
}

void UBPL_Activity::ResetActivityRequest(const UObject* WorldContextObject) {
}

void UBPL_Activity::ResetActivityAvailability(EActivityType _activityType) {
}

void UBPL_Activity::ResetActivities(const UObject* WorldContextObject) {
}

TArray<FString> UBPL_Activity::MakeCompletedTasksList(const EActivityType _actType, const EActivityTaskID _actTask) {
    return TArray<FString>();
}

void UBPL_Activity::LoadActivity(const EActivityType _actType, const EActivityTaskID _actTask, const UObject* WorldContextObject) {
}

bool UBPL_Activity::IsActivityRequest(const UObject* WorldContextObject) {
    return false;
}

void UBPL_Activity::InstallActivity(UDataTable* _table, const UObject* WorldContextObject) {
}

EActivityTaskID UBPL_Activity::GetProgressActivityID(const UObject* WorldContextObject) {
    return EActivityTaskID::Activity;
}

EActivityType UBPL_Activity::GetActivityCardType(const UObject* WorldContextObject) {
    return EActivityType::Act_None;
}

void UBPL_Activity::FinishActivity(const EActivityType _activityType, const UObject* WorldContextObject) {
}

FString UBPL_Activity::ConvertActivityId(const EActivityType _actType, const EActivityTaskID _actTask) {
    return TEXT("");
}

void UBPL_Activity::ActivityTerminate() {
}

void UBPL_Activity::ActivityStart(const FString& ActivityId) {
}

void UBPL_Activity::ActivityResume(const FString& ActivityId, const FString& inProgressTask, const TArray<FString>& inCompletedTasks) {
}

void UBPL_Activity::ActivityEnd(const FString& ActivityId) {
}

void UBPL_Activity::ActivityAvailabilityChange(const FString& ActivityId, bool Enable) {
}


