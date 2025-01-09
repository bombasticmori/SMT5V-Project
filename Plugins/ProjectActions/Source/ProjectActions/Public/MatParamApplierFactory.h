#pragma once
	 
#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "MatParamApplierFactory.generated.h"

/**
 * 
 */
UCLASS()
class UMatParamApplierFactory : public UFactory
{
	GENERATED_BODY()
public:
	UMatParamApplierFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
