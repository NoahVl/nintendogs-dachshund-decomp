#include "m2c.h"
#include "engine.h"

s32 func_020f7e80(s32 arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x214), s32 *, 4) > 0) {
        return 1;
    }
    return 0;
}
