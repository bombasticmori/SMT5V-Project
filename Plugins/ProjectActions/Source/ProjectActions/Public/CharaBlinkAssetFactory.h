#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CharaBlinkAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCharaBlinkAssetFactory : public UFactory
{
	GENERATED_BODY()
public:
	UCharaBlinkAssetFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
