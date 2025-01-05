#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_DrawDebugPause.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_DrawDebugPause : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_DrawDebugPause();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugStringWhenPaused(UObject* WorldContextObject, const FVector TextLocation, const FString& Text, FLinearColor TextColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugSphereWhenPaused(UObject* WorldContextObject, const FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugPointWhenPaused(UObject* WorldContextObject, const FVector Position, float Size, FLinearColor PointColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugLineWhenPaused(UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, FLinearColor LineColor, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCylinderWhenPaused(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, int32 Segments, FLinearColor LineColor, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCoordinateSystemWhenPaused(UObject* WorldContextObject, const FVector AxisLoc, const FRotator AxisRot, float Scale, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugConeWhenPaused(UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugConeInDegreesWhenPaused(UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCircleWhenPaused(UObject* WorldContextObject, FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCapsuleWhenPaused(UObject* WorldContextObject, const FVector Center, float HalfHeight, float Radius, const FRotator Rotation, FLinearColor LineColor, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugBoxWhenPaused(UObject* WorldContextObject, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugArrowWhenPaused(UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Thickness);
    
};

