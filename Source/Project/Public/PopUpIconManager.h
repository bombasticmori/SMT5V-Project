#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "E_POP_UP_ICON_TYPE.h"
#include "PopUpIconEntry.h"
#include "PopUpIconManager.generated.h"

class ACustomPawn;
class UPopUpIconManager;

UCLASS(Blueprintable)
class PROJECT_API UPopUpIconManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPopUpIconEntry> m_RenderEntries;
    
public:
    UPopUpIconManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void UpdateRender(const FVector& PlayerLocation, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterByOwner(const ACustomPawn* Owner);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool Register(ACustomPawn* Owner, E_POP_UP_ICON_TYPE IconType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRenderEntriesMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPopUpIconEntry> GetRenderEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPopUpIconManager* GetPopUpIconManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountShowingEntriesMax() const;
    
};

