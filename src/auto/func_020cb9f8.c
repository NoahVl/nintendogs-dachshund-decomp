#include "m2c.h"
#include "engine.h"

s32 func_020cb9f8(s32 arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x18) + (arg1 * 8);
}
