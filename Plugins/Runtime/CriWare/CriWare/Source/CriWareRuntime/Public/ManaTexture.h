#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Texture -FallbackName=Texture
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
#include "ManaTexture.generated.h"

class UManaComponentTexture;
class UManaSource;
class UManaTexture;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UManaTexture : public UTexture {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextureUpdated, UManaTexture*, ManaTexture);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaSource* MovieSource;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovieFilePath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderToTexture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetGamma;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHDR: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ClearColor;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideDimensions: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint TargetDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPixelFormat> OverrideFormat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureUpdated OnTextureUpdated;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UManaComponentTexture*> ComponentTextures;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UManaComponentTexture*> AlphaComponentTextures;
    
public:
    UManaTexture();

    UFUNCTION(BlueprintCallable)
    void SetMovieSource(UManaSource* InSource);
    
};

