/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_02003c00(M2C_UNK);
void func_020eadc0(void);

void func_020d7e24(s32 arg0) {
    func_020eadc0();
    *(M2C_UNK *)arg0 = 0;
    func_02003c00(0x10);
}
