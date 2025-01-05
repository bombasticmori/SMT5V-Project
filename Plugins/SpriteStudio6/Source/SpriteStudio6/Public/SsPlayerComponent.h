#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "CoreUObject.h"
#include "Components/MeshComponent.h"
#include "EAlphaBlendType.h"
#include "EColorBlendType.h"
#include "ESsPlayerComponentRenderMode.h"
#include "SsEndPlaySignatureDelegate.h"
#include "SsUserDataSignatureDelegate.h"
#include "SsPlayerComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USs6Project;
class UTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPRITESTUDIO6_API USsPlayerComponent : public UMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> PartsMIDRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInterface*> MaterialReplacementMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInterface*> MapterialReplacementMapPerBlendMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USs6Project* SsProject;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoPlayAnimPackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoPlayAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoPlayAnimPackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoPlayAnimationIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoPlayStartFrame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoPlayRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoPlayLoopCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayRoundTrip;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayFlipH;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayFlipV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESsPlayerComponentRenderMode::Type> RenderMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelDepthOffsetPerPart;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OffScreenPlaneMID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OffScreenRenderResolution;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor OffScreenClearColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UUPerPixel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SsBoundsScale;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsEndPlaySignature OnSsEndPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsUserDataSignature OnSsUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> RenderMIDs;
    
    USsPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePlayer(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetRoundTrip(bool bInRoundTrip);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayFrame(float Frame);
    
    UFUNCTION(BlueprintCallable)
    void SetLoopCount(int32 InLoopCount);
    
    UFUNCTION(BlueprintCallable)
    void SetFlipV(bool InFlipV);
    
    UFUNCTION(BlueprintCallable)
    void SetFlipH(bool InFlipH);
    
    UFUNCTION(BlueprintCallable)
    bool Resume();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTextureReplacementByIndex(int32 PartIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTextureReplacementAll();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTextureReplacement(FName PartName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMaterialReplacementPerBlendMode(EAlphaBlendType AlphaBlendMode, EColorBlendType ColorBlendMode);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMaterialReplacementByIndex(int32 PartIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMaterialReplacementAllPerBlendMode();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMaterialReplacementAll();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMaterialReplacement(FName PartName);
    
    UFUNCTION(BlueprintCallable)
    bool PlayByIndex(int32 AnimPackIndex, int32 AnimationIndex, int32 StartFrame, float PlayRate, int32 LoopCount, bool bRoundTrip);
    
    UFUNCTION(BlueprintCallable)
    bool Play(FName AnimPackName, FName AnimationName, int32 StartFrame, float PlayRate, int32 LoopCount, bool bRoundTrip);
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoundTrip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetRenderTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayingAnimationName(FName& OutAnimPackName, FName& OutAnimationName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayingAnimationIndex(int32& OutAnimPackIndex, int32& OutAnimationIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayFrame() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetPartColorLabelByIndex(int32 PartIndex);
    
    UFUNCTION(BlueprintCallable)
    FName GetPartColorLabel(FName PartName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartAttachTransform(int32 PartIndex, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAnimPacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAnimationsByIndex(int32 AnimPackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAnimations(FName AnimPackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoopCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlipV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlipH() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTextureReplacementByIndex(int32 PartIndex, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void AddTextureReplacement(FName PartName, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void AddMaterialReplacementPerBlendMode(EAlphaBlendType AlphaBlendMode, EColorBlendType ColorBlendMode, UMaterialInterface* InBaseMaterial);
    
    UFUNCTION(BlueprintCallable)
    void AddMaterialReplacementByIndex(int32 PartIndex, UMaterialInterface* InBaseMaterial);
    
    UFUNCTION(BlueprintCallable)
    void AddMaterialReplacement(FName PartName, UMaterialInterface* InBaseMaterial);
    
};

