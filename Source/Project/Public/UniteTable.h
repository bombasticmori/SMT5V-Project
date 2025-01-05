#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InheritSkillTekiseiTable.h"
#include "UniteAccidentDevilTable.h"
#include "UniteAccidentProbTable.h"
#include "UniteAccidentTable.h"
#include "UniteDataTable.h"
#include "UniteDlcDevilTable.h"
#include "UniteNormalTable.h"
#include "UniteSeireiBornTable.h"
#include "UniteSeireiTable.h"
#include "UniteSpTable.h"
#include "UniteTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UUniteTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteDataTable> UniteDataTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteNormalTable> UniteNormalTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteSeireiBornTable> UniteSeireiBornTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteSeireiTable> UniteSeireiTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteSpTable> UniteSpTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteAccidentProbTable> UniteAccidentProbTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteAccidentDevilTable> UniteAccidentDevilTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteAccidentTable> UniteAccidentTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BibleCdfsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BibleCoeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInheritSkillTekiseiTable> InheritSkillTekiseiTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteDlcDevilTable> UniteDlcDevilTableArray;
    
    UUniteTable();

};

