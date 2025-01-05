#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Ss6ProjectSetting.h"
#include "SsAnimePack.h"
#include "SsCellMap.h"
#include "SsEffectFile.h"
#include "Ss6Project.generated.h"

UCLASS(Blueprintable)
class SPRITESTUDIO6_API USs6Project : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSs6ProjectSetting Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CellmapNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimepackNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EffectFileNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSsAnimePack> AnimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSsCellMap> CellmapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSsEffectFile> EffectList;
    
    USs6Project();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAnimPackNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAnimationNames(FName InAnimPackName) const;
    
};

