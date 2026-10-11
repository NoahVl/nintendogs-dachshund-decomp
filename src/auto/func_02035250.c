#include "m2c.h"
#include "engine.h"

s32 func_02035250(s32 arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x8B) == 5) {
        return 1;
    }
    return 0;
}
