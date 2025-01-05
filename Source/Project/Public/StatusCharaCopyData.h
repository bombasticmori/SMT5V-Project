#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StatusCharaCopyData_DecalData.h"
#include "StatusCharaCopyData_MeshData.h"
#include "StatusCharaCopyData_ParticleData.h"
#include "StatusCharaCopyData_PointLightData.h"
#include "StatusCharaCopyData.generated.h"

USTRUCT(BlueprintType)
struct FStatusCharaCopyData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusCharaCopyData_MeshData m_MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusCharaCopyData_ParticleData> m_ParticleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusCharaCopyData_PointLightData m_PointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusCharaCopyData_DecalData> m_DecalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NkmScale;
    
    PROJECT_API FStatusCharaCopyData();
};

