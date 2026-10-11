#include "m2c.h"
#include "engine.h"

s32 func_021144e4(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0xC6);
}
