#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureGroup -FallbackName=TextureGroup
#include "Templates/SubclassOf.h"
#include "BPL_TestEventLipSync.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_TestEventLipSync : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TestEventLipSync();

    UFUNCTION(BlueprintCallable)
    static void SetLODBias(const int32 LODGroup, const int32 LODBias);
    
    UFUNCTION(BlueprintCallable)
    static void LogTextureLODInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTextureGroupName(const int32 LODGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLODBias(const int32 LODGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<AActor> GetAssetClass(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_RecreateSamplerStates(TEnumAsByte<TextureGroup> LODGroup, float MipMapBias);
    
    UFUNCTION(BlueprintCallable)
    static int32 ClampLODGroup(int32 LODGroup);
    
};

