#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "SoundAtomCueSheet.generated.h"

class USoundAtomCue;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API USoundAtomCueSheet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Contains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AcbFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAwbDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath AwbDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueSheetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEncrypt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> Cues;
    
    USoundAtomCueSheet();

    UFUNCTION(BlueprintCallable)
    static void ReleaseAcb(FName AcbName);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCueSheet* LoadAtomCueSheet(USoundAtomCueSheet* CueSheet, bool bAddToLevel);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCueSheet* LoadAcb(FName AcbName, bool bAddToLevel);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoaded();
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetAtomCueByName(const FString& CueName);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetAtomCueByIndex(int32 CueIndex);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetAtomCueById(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable)
    static void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds);
    
};

