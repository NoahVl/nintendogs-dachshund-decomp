#include "m2c.h"
#include "engine.h"

s32 func_020741d4(s32 arg0) {
    return M2C_FIELD(arg0, u16 *, 0x30) * 8;
}
