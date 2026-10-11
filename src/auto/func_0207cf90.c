#include "m2c.h"
#include "engine.h"

s32 func_0207cf90(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 0xC) == M2C_FIELD(arg0, s32 *, 4)) {
        return 1;
    }
    return 0;
}
