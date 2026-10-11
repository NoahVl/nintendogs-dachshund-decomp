/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_020dafcc(void);
void func_020db44c(M2C_UNK, M2C_UNK);

void func_020daae8(void) {
    s32 temp_r0;

    temp_r0 = func_020dafcc();
    if (temp_r0 < 0) {
        return;
    }
    func_020db44c(temp_r0, 0);
}
