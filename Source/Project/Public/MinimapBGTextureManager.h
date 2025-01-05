#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MinimapAreaTable.h"
#include "MinimapBGTextureManager.generated.h"

class UMinimapBGTextureEntry;

UCLASS(Blueprintable)
class PROJECT_API UMinimapBGTextureManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMinimapBGTextureEntry*> m_Entries;
    
    UMinimapBGTextureManager();

    UFUNCTION(BlueprintCallable)
    UMinimapBGTextureEntry* SearchEntry(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseResourceOther(int32 KeepMapId, int32 KeepAreaId, int32 PlayerMapId, int32 PlayerAreaId);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseResourceByMapId(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseResourceAll();
    
    UFUNCTION(BlueprintCallable)
    UMinimapBGTextureEntry* RegisterLoadedTexture(UObject* Object, int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAll(const FMinimapAreaTable& AreaTable);
    
    UFUNCTION(BlueprintCallable)
    UMinimapBGTextureEntry* LoadBlocking(TSoftObjectPtr<UObject> SoftObjectReference, int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    UMinimapBGTextureEntry* GetLoadedEntry(int32 mapId, int32 AreaId);
    
};

