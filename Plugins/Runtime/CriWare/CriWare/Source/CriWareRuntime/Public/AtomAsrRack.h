#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AtomAsrRack.generated.h"

class UAtomAsrRack;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomAsrRack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RackId;
    
    UAtomAsrRack();

    UFUNCTION(BlueprintCallable)
    void SetEffectBypass(const FString& BusName, const FString& EffectName, bool Bypasses);
    
    UFUNCTION(BlueprintCallable)
    void SetBusVolumeByName(const FString& BusName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelByName(const FString& SourceBusName, const FString& DestBusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    static UAtomAsrRack* GetDefaultAsrRack();
    
    UFUNCTION(BlueprintCallable)
    bool GetBusAnalyzerInfo(const FString& DspBusName, int32& num_channels, TArray<float>& rms_levels, TArray<float>& peak_levels, TArray<float>& peak_hold_levels);
    
    UFUNCTION(BlueprintCallable)
    static UAtomAsrRack* GetAsrRack(int32 AsrRackId);
    
    UFUNCTION(BlueprintCallable)
    void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable)
    void ConnectToPadSpeaker(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds);
    
};

