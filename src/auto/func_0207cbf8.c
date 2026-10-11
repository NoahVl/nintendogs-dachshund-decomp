#include "m2c.h"
#include "engine.h"

s32 func_0207cbf8(s32 arg0) {
    return M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, u16 *, 8) * 0x10);
}
