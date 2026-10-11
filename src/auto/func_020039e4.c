#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214ce78;

s32 func_020039e4(void) {
    if (M2C_FIELD(&data_0214ce78, u16 *, 4) == 2) {
        return 1;
    }
    return 0;
}
