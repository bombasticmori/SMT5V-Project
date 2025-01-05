#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "E_MINIMAP_POI_ICON.h"
#include "E_MINIMAP_POI_TYPE.h"
#include "E_MINIMAP_VISIBILITY.h"
#include "Map3DIconEntry.h"
#include "MinimapAreaTable.h"
#include "MinimapAreaTableItem.h"
#include "MinimapCoasterLineRenderEntry.h"
#include "MinimapFootprintEntry.h"
#include "MinimapPOIEntry.h"
#include "MinimapPOIParam.h"
#include "MinimapRadarEntry.h"
#include "MinimapRenderParam.h"
#include "MinimapManager.generated.h"

class AActor;
class UDataTable;
class UImage;
class UMapSelectManager;
class UMaterialInterface;
class UMinimapBGTextureManager;
class UMinimapCoasterLineManager;
class UMinimapCoasterLineMinimap;
class UMinimapFogGridManager;
class UMinimapFootprintManager;
class UMinimapIconHelpManager;
class UMinimapManager;
class UMinimapPOIManager;
class UMinimapRadarManager;
class UPopUpIconManager;
class UScriptMessageAsset;
class UTexture;

UCLASS(Blueprintable)
class PROJECT_API UMinimapManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Map3DIconNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapFogGridManager* m_FogGridManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMap3DIconEntry> m_Map3DIconEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapPOIManager* m_POIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapFootprintManager* m_FootprintManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapBGTextureManager* m_BGTextureManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMapSelectManager* m_MapSelectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapIconHelpManager* m_IconHelpManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapRadarManager* m_RadarManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPopUpIconManager* m_PopUpIconManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapCoasterLineManager* m_CoasterLineManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapCoasterLineMinimap* m_CoasterLineMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMinimapAreaTable m_AreaTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMap3DIconEntry> m_TopCameraIconEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_PlayerScreenLocation;
    
public:
    UMinimapManager();

    UFUNCTION(BlueprintCallable)
    static FVector WorldToScreenScale(const FVector& Dimensions, const FVector& CanvasSize, float Zoom);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void UpdateTopCameraIcon(const FVector& CameraLocation, float CameraRotateZ, const FVector& HeroLocation, float HeroRotateZ, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRender(const FMinimapRenderParam& RenderParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void UpdateMap3DIcon(const FVector& PlayerLocation, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIconRenderImages();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFootprintByPlayerMovement(const FTransform& PlayerTransform, float DeltaTime, int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFogGridTexture(UTexture* TargetTexture, int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    void UpdateByPlayerMovement(const FTransform& PlayerTransform, float DeltaTime, int32 mapId, int32 AreaId, float FogGridOpenRadius, const FVector& CanvasSize);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterDynamicPOIByOwner(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void ToggleIconHideByUI(E_MINIMAP_POI_ICON icon);
    
    UFUNCTION(BlueprintCallable)
    void StartCoasterLineMode();
    
    UFUNCTION(BlueprintCallable)
    void StartCoasterLineMinimapMode(int32 DataId);
    
    UFUNCTION(BlueprintCallable)
    void SetShowingId(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetShowFlagFromUniqueId(int32 SaveUniqueId, bool ShowFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFlagFromMapId(int32 mapId, int32 AreaId, int32 SaveId, bool ShowFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFlagAll(bool ShowFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerId(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSelectReachFlagAll(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSelectReachFlag(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    void SetIconMaterial(UMaterialInterface* MaterialInterface);
    
    UFUNCTION(BlueprintCallable)
    void SetIconHideByUIAll(bool IsHide);
    
    UFUNCTION(BlueprintCallable)
    void SetIconHideByUI(E_MINIMAP_POI_ICON icon, bool IsHide);
    
    UFUNCTION(BlueprintCallable)
    static void SetIconFogGridFlagFromUniqueId(int32 SaveUniqueId, bool ShowFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetIconFogGridFlagFromDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, bool ShowFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetFootprintDistance(float targetDistance);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlActorToStatic(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, AActor* ControlActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCoasterLineMinimapImageAndMaterial(UImage* Image, UMaterialInterface* MaterialInterface);
    
    UFUNCTION(BlueprintCallable)
    void SetCoasterLineMaterial(UMaterialInterface* MaterialInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMinimapAreaTableItem SearchItem(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicPOI();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveRadarBySaveUniqueId(int32 mapId, int32 AreaId, int32 SaveUniqueId);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveRadarByDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveRadarAll();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterRadarBySaveUniqueId(int32 mapId, int32 AreaId, int32 SaveUniqueId);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterRadarByDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMinimapIconTableAll(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDynamicPOI(const FMinimapPOIParam& InParam, AActor* Owner, bool Show3D, FVector WorldLocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void PrintLog();
    
    UFUNCTION(BlueprintCallable)
    void MakeUpMapSelect(UObject* pObject);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpIconHelp(UObject* pTable, UScriptMessageAsset* pNameMessage, UScriptMessageAsset* pHelpMessage);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpAreaTable(UObject* pObject, UObject* pOverrideObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleByFogGridRadius(int32 mapId, int32 AreaId, const FVector& Location, float Radius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleByFogGrid(int32 mapId, int32 AreaId, const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingPlayerId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerId(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconHideByUI(E_MINIMAP_POI_ICON icon);
    
    UFUNCTION(BlueprintCallable)
    void InitAfterResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMap3DIconEntry GetTopCameraPlayerIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMap3DIconEntry> GetTopCameraIconEntries();
    
    UFUNCTION(BlueprintCallable)
    FMinimapPOIEntry GetStaticMinimapEntryBySaveUniqueId(int32 mapId, int32 AreaId, int32 SaveUniqueId, bool& Found);
    
    UFUNCTION(BlueprintCallable)
    FMinimapPOIEntry GetStaticMinimapEntry(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, bool& Found);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShowingId(int32& OutMapId, int32& OutAreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetShowFlagFromUniqueId(int32 SaveUniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowFlagFromMapId(int32 mapId, int32 AreaId, int32 SaveId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSaveUniqueIdFromDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, E_MINIMAP_POI_ICON icon, int32 DataId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSaveUniqueId(int32 mapId, int32 AreaId, int32 SaveId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRadarRegisteredCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMinimapRadarEntry> GetRadarEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPopUpIconManager* GetPopUpIconManager();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMinimapPOIEntry> GetPOIRenderEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerScreenLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerId(int32& OutMapId, int32& OutAreaId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetOnOffEffectArrayRyuketsu(int32& OutNum);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetOnOffEffectArrayAll(int32& OutNum);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetOnOffEffectArray(E_MINIMAP_POI_ICON icon, int32& OutNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNextAreaInMap(int32 MyMapId, int32 MyAreaId, int32 Direction, bool IsTrigger, int32& OutMapId, int32& OutAreaId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMinimapManager* GetMinimapManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool GetMapSelectReachFlag(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapSelectManager* GetMapSelectManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMapName(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMap3DIconEntry> GetMap3DIconEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_MINIMAP_POI_ICON GetIconToRenderMission(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    void GetIconMaterialTopCamera(E_MINIMAP_POI_ICON icon, float& OutU, float& OutV, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetIconMaterial3D(E_MINIMAP_POI_ICON icon, float& OutU, float& OutV, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetIconMaterial(E_MINIMAP_POI_ICON icon, float& OutU, float& OutV, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UImage*> GetIconImageArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMinimapIconHelpManager* GetIconHelpManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIconFogGridFlagFromUniqueId(int32 SaveUniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMinimapFootprintManager* GetFootprintManager();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMinimapFootprintEntry> GetFootprintEntries();
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetFogGridTexture();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMinimapCoasterLineRenderEntry> GetCoasterLineRenderEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCoasterLineMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCoasterLineMinimapMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UImage* GetCoasterLineMinimapImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UImage*> GetCoasterLineImageArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMinimapBGTextureManager* GetBGTextureManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAreaInMapNum();
    
    UFUNCTION(BlueprintCallable)
    void FogGridSetOpenAll(int32 mapId, int32 AreaId, bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void FogGridOpen(const FTransform& PlayerTransform, int32 mapId, int32 AreaId, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void FogGridEnable(bool isEnable);
    
    UFUNCTION(BlueprintCallable)
    void FinishCoasterLineMode();
    
    UFUNCTION(BlueprintCallable)
    void FinishCoasterLineMinimapMode();
    
    UFUNCTION(BlueprintCallable)
    bool Delete3DIconByOwner(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    bool Delete3DIconByDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId);
    
    UFUNCTION(BlueprintCallable)
    bool ClearControlActorFromStatic(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeDynamicPOIIconByOwner(E_MINIMAP_POI_TYPE POIType, AActor* Owner, E_MINIMAP_POI_ICON NewIcon);
    
    UFUNCTION(BlueprintCallable)
    static E_MINIMAP_VISIBILITY CalcScreenLocation(FVector& OutScreenLocation, const FVector& LocationInWorld, const FVector2D& DrawOffset, const FMinimapRenderParam& RenderParam, bool IsShowFar, bool IsCalcOuter, float& OutDist2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcAllZoomDefault(int32 mapId, int32 AreaId, const FMinimapAreaTableItem& AreaTableItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcAllZoomArray(int32 mapId, int32 AreaId, const TArray<FVector> Locations);
    
    UFUNCTION(BlueprintCallable)
    FMinimapAreaTableItem ApplyOverrideToAreaTable(int32 mapId, int32 AreaId, const FMinimapAreaTableItem& AreaTableItem);
    
    UFUNCTION(BlueprintCallable)
    bool Add3DIcon(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, AActor* Owner, FVector WorldLocationOffset);
    
};

