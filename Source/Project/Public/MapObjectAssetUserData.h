#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "E_MAP_OBJ_BATTLE_TYPE.h"
#include "MapObjectAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UMapObjectAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MAP_OBJ_BATTLE_TYPE m_DataType;
    
    UMapObjectAssetUserData();

};

