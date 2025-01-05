#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MinimapIconHelpData.h"
#include "MinimapIconHelpEntry.h"
#include "MinimapIconHelpManager.generated.h"

class UMinimapIconHelpManager;

UCLASS(Blueprintable)
class PROJECT_API UMinimapIconHelpManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinimapIconHelpData> m_DataArray;
    
public:
    UMinimapIconHelpManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMinimapIconHelpManager* GetMinimapIconHelpManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMinimapIconHelpEntry> GetDisplayList(int32 mapId);
    
};

