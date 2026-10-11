/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

s32 func_020a73dc(s32 arg0) {
    if ((M2C_FIELD(arg0, s16 *, 0x90) == 0) && (M2C_FIELD(arg0, s16 *, 0x8A) == 0)) {
        return 1;
    }
    return 0;
}
