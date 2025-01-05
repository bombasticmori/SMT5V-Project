#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnFailedDelegate.h"
#include "OnGetResultDelegate.h"
#include "JsonDataCtrl.generated.h"

class UJsonDataCtrl;

UCLASS(Blueprintable)
class UJsonDataCtrl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetResult OnGetResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFailed OnFailed;
    
    UJsonDataCtrl();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UJsonDataCtrl* SetStringArray(const FString& Key, const TArray<FString> arrayData);
    
    UFUNCTION(BlueprintCallable)
    UJsonDataCtrl* SetString(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    UJsonDataCtrl* SetObjectArray(const FString& Key, const TArray<UJsonDataCtrl*> arrayData);
    
    UFUNCTION(BlueprintCallable)
    UJsonDataCtrl* SetObject(const FString& Key, const UJsonDataCtrl* objectData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PrePostRequest(UObject* WorldContextObject, const FString& Filename);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PostRequest(UObject* WorldContextObject, const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsJsonEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStringArray(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UJsonDataCtrl* GetRequest(UObject* WorldContextObject, const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<FString> GetObjectKeys(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<UJsonDataCtrl*> GetObjectArray(UObject* WorldContextObject, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UJsonDataCtrl* GetObject(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void FromString(const FString& dataString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UJsonDataCtrl* Create(UObject* WorldContextObject);
    
};

