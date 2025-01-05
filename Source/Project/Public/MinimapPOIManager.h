#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "E_MINIMAP_POI_ICON.h"
#include "E_MINIMAP_POI_TYPE.h"
#include "MinimapPOIEntry.h"
#include "MinimapPOIOneMapData.h"
#include "MinimapPOIParam.h"
#include "MinimapPOIManager.generated.h"

class AActor;
class UImage;

UCLASS(Blueprintable)
class PROJECT_API UMinimapPOIManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapPOIEntry> m_DynamicEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapPOIOneMapData> m_StaticMapEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapPOIEntry> m_RenderEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> m_ImageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_OnOffEffectArray;
    
public:
    UMinimapPOIManager();

    UFUNCTION(BlueprintCallable)
    bool UnregisterDynamicPOIByOwner(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlActorToStatic(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, AActor* ControlActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicPOI();
    
    UFUNCTION(BlueprintCallable)
    void RegisterDynamicPOI(const FMinimapPOIParam& InParam, AActor* Owner, bool Show3D, FVector WorldLocationOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRenderEntriesMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMinimapPOIEntry> GetRenderEntries();
    
    UFUNCTION(BlueprintCallable)
    bool Delete3DIconByOwner(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    bool Delete3DIconByDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId);
    
    UFUNCTION(BlueprintCallable)
    bool ClearControlActorFromStatic(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeDynamicPOIIconByOwner(E_MINIMAP_POI_TYPE POIType, AActor* Owner, E_MINIMAP_POI_ICON NewIcon);
    
};

