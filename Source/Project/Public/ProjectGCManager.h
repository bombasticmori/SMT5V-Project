#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CollectFinishedSignatureDelegate.h"
#include "EGCPriority.h"
#include "ProjectGCManager.generated.h"

class UProjectGCManager;

UCLASS(Blueprintable)
class PROJECT_API UProjectGCManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectObjectCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> DisregardForGCClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> ResidentClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> DisregardForGCClassObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ResidentClassObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCollectFinishedSignature OnPostGC;
    
public:
    UProjectGCManager();

    UFUNCTION(BlueprintCallable)
    void ReleaseAndCollectResidentAssets(FCollectFinishedSignature OnReleased);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletedLoadResidentAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UProjectGCManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void Collect(const FString& LogKeyword, EGCPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadResidentAssets();
    
};

