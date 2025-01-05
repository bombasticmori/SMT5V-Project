#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EActivityTaskID.h"
#include "EActivityType.h"
#include "BPL_Activity.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_Activity : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Activity();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartActivity(const EActivityType _activityType, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActivityFromMapEvent(int32 _mapEventID, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActivityFromId(EActivityType _activity, EActivityTaskID _task, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetActivityRequest(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetActivityAvailability(EActivityType _activityType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetActivities(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> MakeCompletedTasksList(const EActivityType _actType, const EActivityTaskID _actTask);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadActivity(const EActivityType _actType, const EActivityTaskID _actTask, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActivityRequest(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InstallActivity(UDataTable* _table, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EActivityTaskID GetProgressActivityID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EActivityType GetActivityCardType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FinishActivity(const EActivityType _activityType, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertActivityId(const EActivityType _actType, const EActivityTaskID _actTask);
    
    UFUNCTION(BlueprintCallable)
    static void ActivityTerminate();
    
    UFUNCTION(BlueprintCallable)
    static void ActivityStart(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    static void ActivityResume(const FString& ActivityId, const FString& inProgressTask, const TArray<FString>& inCompletedTasks);
    
    UFUNCTION(BlueprintCallable)
    static void ActivityEnd(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    static void ActivityAvailabilityChange(const FString& ActivityId, bool Enable);
    
};

