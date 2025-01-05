#include "JsonDataCtrl.h"

UJsonDataCtrl::UJsonDataCtrl() {
}

UJsonDataCtrl* UJsonDataCtrl::SetStringArray(const FString& Key, const TArray<FString> arrayData) {
    return NULL;
}

UJsonDataCtrl* UJsonDataCtrl::SetString(const FString& Key, const FString& Value) {
    return NULL;
}

UJsonDataCtrl* UJsonDataCtrl::SetObjectArray(const FString& Key, const TArray<UJsonDataCtrl*> arrayData) {
    return NULL;
}

UJsonDataCtrl* UJsonDataCtrl::SetObject(const FString& Key, const UJsonDataCtrl* objectData) {
    return NULL;
}

void UJsonDataCtrl::PrePostRequest(UObject* WorldContextObject, const FString& Filename) {
}

void UJsonDataCtrl::PostRequest(UObject* WorldContextObject, const FString& Filename) {
}

bool UJsonDataCtrl::IsJsonEditor() {
    return false;
}

TArray<FString> UJsonDataCtrl::GetStringArray(const FString& Key) {
    return TArray<FString>();
}

FString UJsonDataCtrl::GetString(const FString& Key) const {
    return TEXT("");
}

UJsonDataCtrl* UJsonDataCtrl::GetRequest(UObject* WorldContextObject, const FString& Filename) {
    return NULL;
}

TArray<FString> UJsonDataCtrl::GetObjectKeys(UObject* WorldContextObject) {
    return TArray<FString>();
}

TArray<UJsonDataCtrl*> UJsonDataCtrl::GetObjectArray(UObject* WorldContextObject, const FString& Key) {
    return TArray<UJsonDataCtrl*>();
}

UJsonDataCtrl* UJsonDataCtrl::GetObject(const FString& Key) {
    return NULL;
}

void UJsonDataCtrl::FromString(const FString& dataString) {
}

UJsonDataCtrl* UJsonDataCtrl::Create(UObject* WorldContextObject) {
    return NULL;
}


