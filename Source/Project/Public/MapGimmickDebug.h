#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MapGimmickDebug.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROJECT_API UMapGimmickDebug : public UObject {
    GENERATED_BODY()
public:
    UMapGimmickDebug();

    UFUNCTION(BlueprintCallable)
    void UpdateCullDistanceVolumes(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    float GetTrueCMDD(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetLevelPathNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetLevelNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllActor_FromSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEditor();
    
};

