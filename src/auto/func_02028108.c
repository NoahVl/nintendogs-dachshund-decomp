#include "m2c.h"
#include "engine.h"

s32 func_02028108(s32 arg0) {
    return (s32) *M2C_FIELD(arg0, u16 **, 0x9E8);
}
