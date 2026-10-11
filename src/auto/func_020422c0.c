#include "m2c.h"
#include "engine.h"

extern s32 data_0214da84;

s32 func_020422c0(s32 arg0) {
    return (s32) M2C_FIELD((data_0214da84 + arg0), s8 *, 0x16);
}
