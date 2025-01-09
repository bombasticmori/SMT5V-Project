#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "MMIAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class UMMIAssetFactory : public UFactory
{
	GENERATED_BODY()
public: 
	UMMIAssetFactory();
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
