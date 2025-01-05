#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundConcurrencySettings -FallbackName=SoundConcurrencySettings
#include "SoundAtomCue.generated.h"

class USoundAtomCue;
class USoundAtomCueSheet;
class USoundAttenuation;
class USoundConcurrency;

UCLASS(Blueprintable, EditInlineNew)
class CRIWARERUNTIME_API USoundAtomCue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyAtomParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideConcurrency: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundConcurrency* SoundConcurrencySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundConcurrencySettings ConcurrencyOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* DefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEconomicTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEconomicTickSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EconomicTickMarginDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EconomicTickFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullingSoundPlayingProcessByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyCullingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxProcessDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCullingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullingMarginDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ActionTrackSourceCue;
    
    USoundAtomCue();

    UFUNCTION(BlueprintCallable)
    bool IsParameterPalletAssigned();
    
    UFUNCTION(BlueprintCallable)
    FString GetUserData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAttenuationDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickMarginDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickFrequencyToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickBoundaryDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCullingMarginDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCullingBoundaryDistanceToUse() const;
    
};

