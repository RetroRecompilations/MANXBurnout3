#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"

/* Exact retail frontend-object constructor, 0x14760..0x1485C. */
void sub_00014760(void)
{
    int _flags = 0;

    SET_LO8(eax, MEM8(0x4A1C7B));
    PUSH32(esp, ebx);
    ebx = 0;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x1E4) = 0;
    MEM32(esi + 0x204) = 0;
    MEM32(esi + 0x220) = 0;
    MEM32(esi + 0x210) = 0;
    MEM32(esi + 0x21C) = 1;
    if (CMP_NE(LO8(eax), 0)) goto loc_000147C2;

    eax = MEM32(0x3C8384);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx += 0x10;
    PUSH32(esp, 0x3C8380);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8388);
    eax = 0;
    edx = 0x3A8420;
    PUSH32(esp, 0); sub_001AEE20();
    MEM8(0x4A1C7B) = 1;

loc_000147C2:
    ecx = 0x463AF0;
    /* 0x5E6C0 is an Xbox platform helper absent from the selected transform.
     * Preserve its call boundary; the constructor's XBE-visible writes below
     * do not depend on its return value. */
    { uint32_t s = g_esp; PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x0005E6C0, s); }
    MEM8(esi + 0x261) = 0;
    MEM32(esi + 0x238) = 1;
    MEM32(esi + 0x23C) = 0x18;
    MEM32(0x567AD8) = 0;
    eax = 0x463C78;
    MEM32(esi + 0x248) = 0x5E03E9D1;
    MEM32(esi + 0x24C) = 0x94413FA7u;
    MEM32(esi + 0x240) = 0;
    MEM32(esi + 0x250) = 1;
    MEM32(esi + 0x258) = 0;
    MEM32(esi + 0x254) = 0;
    MEM32(esi + 0x1CC) = 0;
    MEM8(esi + 0x262) = 0;
    MEM8(esi + 0x263) = 0;
    MEM8(esi + 0x234) = 1;
    PUSH32(esp, 0); sub_00061B20();
    MEM8(0x464015) = 1;
    MEM32(esi + 0x1B8) = 0;
    MEM32(esi + 0x1BC) = 0;
    MEM8(esi + 0x1C0) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4;
}
