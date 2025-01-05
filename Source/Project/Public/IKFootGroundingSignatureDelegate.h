#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "IKFootGroundingSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FIKFootGroundingSignature, bool, bLeftFoot, bool, bSlip, FVector, Location, FVector, Normal, TEnumAsByte<EPhysicalSurface>, SurfaceType);

