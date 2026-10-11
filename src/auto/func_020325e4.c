/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

s32 func_020325e4(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x924) & 0x40000000) {
        return 1;
    }
    return 0;
}
