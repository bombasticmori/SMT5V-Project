#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CharaStampEffectFactory.generated.h"

UCLASS()
class UCharaStampEffectFactory : public UFactory
{
	GENERATED_BODY()
public:
	UCharaStampEffectFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
