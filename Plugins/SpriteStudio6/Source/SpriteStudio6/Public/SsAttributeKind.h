#pragma once
#include "CoreMinimal.h"
#include "SsAttributeKind.generated.h"

UENUM(BlueprintType)
namespace SsAttributeKind {
    enum Type {
        Cell,
        Posx,
        Posy,
        Posz,
        Rotx,
        Roty,
        Rotz,
        Sclx,
        Scly,
        Losclx,
        Loscly,
        Alpha,
        Loalpha,
        Prio,
        Fliph,
        Flipv,
        Hide,
        PartsColor,
        Color,
        Vertex,
        Pivotx,
        Pivoty,
        Anchorx,
        Anchory,
        Sizex,
        Sizey,
        Imgfliph,
        Imgflipv,
        Uvtx,
        Uvty,
        Uvrz,
        Uvsx,
        Uvsy,
        Boundr,
        Mask,
        User,
        Instance,
        Effect,
        Deform,
        Num,
        Invalid = 254,
    };
}

