#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDrawDebugTrace -FallbackName=EDrawDebugTrace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MapSymbolRouteNode.h"
#include "MapSymbolComponentCPP.generated.h"

class AActor;
class ACustomPawn;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UMapSymbolComponentCPP : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ActCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ActCounterEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SmallActCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SmallActCounterEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_PlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_PrevLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_PrevRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_NextLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_NextRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_NextForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsMove_PrevFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeltaSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeltaSecAfterMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_PlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> m_CollisionObjectTypes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EncountCollisionSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_MinimapLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_MinimapRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeltaTime_ForMinimap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpaceWhenSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UniqueSymbolBGM;
    
public:
    UMapSymbolComponentCPP(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSomeTimes_cpp();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMotionBlendCounter_cpp();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void UpdateLocationInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttackMotionCounter_cpp();
    
    UFUNCTION(BlueprintCallable)
    void UpdateActCounter();
    
    UFUNCTION(BlueprintCallable)
    void TraceStickWall_cpp(FVector moveDir, float moveLength, int32 traceFrameCount, FName CollisionProfileName, bool ground, FVector HitNormal, FVector symbolSize, float climbableHeight, float collisionHeight, TEnumAsByte<EDrawDebugTrace::Type> drawDebugTrace, bool& out_hit, FVector& out_hitLocation, float& out_canMoveLength, bool& out_beginningHit);
    
    UFUNCTION(BlueprintCallable)
    void StartMotionBlendCounter_cpp(float endSec);
    
    UFUNCTION(BlueprintCallable)
    void StartAttackMotionCounter_cpp(float endSec);
    
    UFUNCTION(BlueprintCallable)
    void SetNextRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetNextLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReserveAsyncLineTrace(const TArray<FHitResult>& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_StartInhale_Tick(float deltaSec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_StartInhale_End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_StartInhale_Begin(float totalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_EndInhale_Tick(float deltaSec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_EndInhale_End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_EndInhale_Begin(float totalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpaceWhenSpawning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPrevRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPrevLocation();
    
    UFUNCTION(BlueprintCallable)
    TArray<ACustomPawn*> GetNearSymbols();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMotionBlendCounterEnd_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMotionBlendAlpha_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaSecAfterMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertDevilLevel(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUniqueSymbolBGM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSomeTimes_Short_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSomeTimes_Long_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSomeTimes_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRender();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAttackMotionCounterEnd_cpp();
    
    UFUNCTION(BlueprintCallable)
    void CalcSlope_cpp(float Slope, FVector HitNormal, float climbableHeight, float CollisionRadius, float collisionHeight, FName CollisionProfileName, TEnumAsByte<EDrawDebugTrace::Type> drawDebugTrace, bool willMove, bool& out_move, FVector& out_deltaMove, float& out_adjustMin, float& out_adjustMax);
    
    UFUNCTION(BlueprintCallable)
    void CalcRouteCore(TArray<FMapSymbolRouteNode> routeNodeList, FVector StartLoc, FVector goalLoc, FName CollisionProfileName, float routeNodeSpace, float Radius, bool Fly, bool& Success, TArray<FVector>& resultRoute, FHitResult& straightHit);
    
    UFUNCTION(BlueprintCallable)
    void CalcNextLocation_StickWall_cpp(FName CollisionProfileName, bool ground, FVector HitNormal, int32 traceFrameCount, FVector symbolSize, float climbableHeight, float collisionHeight, TEnumAsByte<EDrawDebugTrace::Type> drawDebugTrace, bool& out_hit, FVector& out_wallLocation, FVector& out_deltaMove);
    
    UFUNCTION(BlueprintCallable)
    void Calc_ShouldChangeDir_NearbySymbols(bool isTarget, FVector target, bool& ShouldChange, FVector& TargetVec, float DevilLength, float PlayerLength);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLineTrace(FVector StartPos, FVector goalPos, TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable)
    void AddNextLocation(FVector Add);
    
    UFUNCTION(BlueprintCallable)
    void AddDeltaSecAfterMove(float deltaSec);
    
};

