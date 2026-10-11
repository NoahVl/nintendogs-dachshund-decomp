#include "m2c.h"
#include "engine.h"

extern void *data_02159e70;

s32 func_020e2a64(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) == 0xA) {
        return 1;
    }
    return 0;
}
