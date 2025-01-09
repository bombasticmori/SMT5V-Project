#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CharaMotionOverrideTableFactory.generated.h"

UCLASS()
class UCharaMotionOverrideTableFactory : public UFactory
{
	GENERATED_BODY()
public:
	UCharaMotionOverrideTableFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
