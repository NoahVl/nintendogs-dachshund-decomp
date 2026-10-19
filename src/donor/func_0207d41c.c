/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Mem_SetExpHeapGroupId from https://github.com/RonyxDumb/mkds src/arm9/020176b0_Mem_SetExpHeapGroupId.c (license: none),
 * reused by tools/donor_match.py */
unsigned int func_0207d41c(unsigned int p0, unsigned int p1) {
    unsigned int load_0 =
        ((unsigned int) *(const unsigned short *) ((unsigned char *) (unsigned int) (((p0) + (0x24u))) + 16));
    *(unsigned short *) ((unsigned char *) (unsigned int) (((p0) + (0x24u))) + 16) = (unsigned short) (p1);
    return load_0;
}
