#include "m2c.h"
#include "engine.h"

s32 func_02085d64(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD(((arg1 * 6) + (arg0 + M2C_FIELD(arg0, s32 *, 8))), u16 *, 4);
}
