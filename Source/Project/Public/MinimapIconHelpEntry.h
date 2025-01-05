#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_ICON_HELP_TYPE.h"
#include "E_MINIMAP_POI_ICON.h"
#include "MinimapIconHelpEntry.generated.h"

USTRUCT(BlueprintType)
struct FMinimapIconHelpEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MINIMAP_POI_ICON m_MinimapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_HelpLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MINIMAP_ICON_HELP_TYPE m_Type;
    
    PROJECT_API FMinimapIconHelpEntry();
};

