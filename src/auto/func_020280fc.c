#include "m2c.h"
#include "engine.h"

s32 func_020280fc(s32 arg0) {
    return (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), u8 *, 2);
}
