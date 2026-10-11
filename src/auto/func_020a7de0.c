#include "m2c.h"
#include "engine.h"

extern void *data_021555fc;

void func_020a7de0(s32 arg0) {
    M2C_FIELD(data_021555fc, s16 *, 8) = (s16) arg0;
}
