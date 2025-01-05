#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraActor -FallbackName=CameraActor
#include "Camera/CameraActor.h"
#include "E_TALK_CAMERA_DATA_TYPE.h"
#include "E_TALK_CAMERA_MODEL_HIDE.h"
#include "TalkCameraParam.h"
#include "TalkCamera.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API ATalkCamera : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkCameraParam ParamFinal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkCameraParam ParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkCameraParam ParamInterpolated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkCameraParam Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkCameraParam ParamM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkCameraParam ParamL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkCameraParam ParamOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkCameraParam> TableArray;
    
    ATalkCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTableParam(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateParam(float TargetHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetOffset(const FTalkCameraParam& Offset);
    
    UFUNCTION(BlueprintCallable)
    void PrintOffsetCameraTable(int32 tableIndex, E_TALK_CAMERA_DATA_TYPE DebugDataType, E_TALK_CAMERA_MODEL_HIDE DebugModelHide);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpCameraTable(UObject* pObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTalkCameraParam GetMythFriendUpParam(int32 tableIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_TALK_CAMERA_MODEL_HIDE GetCameraTableModelHide(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_TALK_CAMERA_DATA_TYPE GetCameraTableDataType(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTalkCameraParam GetCameraTableData(int32 tableIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void CalcUniqueSkillCamera(UDataTable* DataTable, int32 UniqueSkillDevilId, float TargetHeight, FVector& OutLocation, FVector& OutRotation);
    
};

