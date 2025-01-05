#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "CoreUObject.h"
#include "Engine/LatentActionManager.h"
#include "Delegates/Delegate.h"
#include "AssetDataAsyncLoader.generated.h"

UCLASS(Abstract, Blueprintable)
class LOADASSETBYASSETDATA_API UAssetDataAsyncLoader : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetDataLoaded, UObject*, Loaded);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetClassDataLoaded, UClass*, Loaded);

    UAssetDataAsyncLoader();

    UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
    static void LoadClassAssetData(UObject* WorldContextObject, FAssetData AssetData, UAssetDataAsyncLoader::FOnAssetClassDataLoaded OnLoaded, FLatentActionInfo LatentInfo);

    UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
    static void LoadAssetData(UObject* WorldContextObject, FAssetData AssetData, UAssetDataAsyncLoader::FOnAssetDataLoaded OnLoaded, FLatentActionInfo LatentInfo);

};

