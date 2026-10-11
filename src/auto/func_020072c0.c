#include "m2c.h"
#include "engine.h"

s32 func_020072c0(s32 arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= 0x18U) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 4) >= 0x3CU) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 8) < 0x3CU) {
        return 1;
    }
    return 0;
}
