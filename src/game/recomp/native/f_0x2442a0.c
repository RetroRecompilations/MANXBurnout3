#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002442A0
 * Original: 0x002442A0 - 0x00244540 (672 bytes, 253 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002442A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_002442A0:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    eax = ecx;
    edx = ecx;
    eax = eax + esi;
    if (CMP_BE(edi, esi)) goto loc_002442C0; /* jbe: below or equal (unsigned <=) */

loc_002442B8:
    if (CMP_B(edi, eax)) goto loc_0024443C; /* jb: below (unsigned <) */

loc_002442C0:
    if (TEST_NZ(edi, 3)) goto loc_002442DC; /* jne: not equal / not zero */

loc_002442C8:
    ecx = ecx >> 2;
    edx = edx & 3;
    if (CMP_B(ecx, 8)) goto loc_002442FC; /* jb: below (unsigned <) */

loc_002442D3:
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x2443EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002443FCu) goto loc_002443FC;
    if (_jt == 0x00244404u) goto loc_00244404;
    if (_jt == 0x00244410u) goto loc_00244410;
    if (_jt == 0x00244424u) goto loc_00244424;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002442DC:
    eax = edi;
    edx = 3;
    ecx = ecx - 4;
    if (CMP_B((uint32_t)ecx + (uint32_t)4, (uint32_t)4)) goto loc_002442F4; /* jb: below (unsigned <) */

loc_002442E8:
    eax = eax & 3;
    ecx = ecx + eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x244300)); return; /* indirect tail jmp */

loc_002442F4:
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x2443FC)); return; /* indirect tail jmp */

    /* nop */

loc_002442FC:
    { uint32_t _jt = MEM32(ecx * 4 + 0x244380); /* switch: 8 entries, 8 targets */
    if (_jt == 0x002443A0u) (void)0; /* goto loc_002443A0 - dead code, label not in function */
    if (_jt == 0x002443A8u) goto loc_002443A8;
    if (_jt == 0x002443B0u) goto loc_002443B0;
    if (_jt == 0x002443B8u) goto loc_002443B8;
    if (_jt == 0x002443C0u) goto loc_002443C0;
    if (_jt == 0x002443C8u) goto loc_002443C8;
    if (_jt == 0x002443D0u) goto loc_002443D0;
    if (_jt == 0x002443E3u) goto loc_002443E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    MEM8(ebx + 0x24) = MEM8(ebx + 0x24) + LO8(eax) + _cf; /* adc */
    MEM8(ebx + eax * 2) = MEM8(ebx + eax * 2) + HI8(ebx);
    SET_LO8(eax, LO8(eax) & 0);
    /* TODO: pushal  */
    ebx++;
    SET_LO8(eax, LO8(eax) & 0);
    edx = edx & ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    ecx = ecx >> 2;
    MEM8(edi + 2) = LO8(eax);
    esi = esi + 3;
    edi = edi + 3;
    if (CMP_B(ecx, 8)) goto loc_002442FC; /* jb: below (unsigned <) */

loc_00244330:
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x2443EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002443FCu) goto loc_002443FC;
    if (_jt == 0x00244404u) goto loc_00244404;
    if (_jt == 0x00244410u) goto loc_00244410;
    if (_jt == 0x00244424u) goto loc_00244424;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    edx = edx & ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    ecx = ecx >> 2;
    MEM8(edi + 1) = LO8(eax);
    esi = esi + 2;
    edi = edi + 2;
    if (CMP_B(ecx, 8)) goto loc_002442FC; /* jb: below (unsigned <) */

loc_00244356:
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x2443EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002443FCu) goto loc_002443FC;
    if (_jt == 0x00244404u) goto loc_00244404;
    if (_jt == 0x00244410u) goto loc_00244410;
    if (_jt == 0x00244424u) goto loc_00244424;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    edx = edx & ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    esi = esi + 1;
    ecx = ecx >> 2;
    edi = edi + 1;
    if (CMP_B(ecx, 8)) goto loc_002442FC; /* jb: below (unsigned <) */

loc_00244374:
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x2443EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002443FCu) goto loc_002443FC;
    if (_jt == 0x00244404u) goto loc_00244404;
    if (_jt == 0x00244410u) goto loc_00244410;
    if (_jt == 0x00244424u) goto loc_00244424;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    if (ecx == 0) (void)0; /* goto loc_002443C5 - dead code, label not in function */ /* jecxz */

loc_00244382:
    SET_LO8(eax, LO8(eax) & 0);
    MEM8(ebx + 0x24) = ROL32(MEM8(ebx + 0x24), 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    ebx++;
    SET_LO8(eax, LO8(eax) & 0);
    MEM8(ebx + 0x24) = ROL32(MEM8(ebx + 0x24), 0);
    eax = 0xB0002443u;
    ebx++;
    SET_LO8(eax, LO8(eax) & 0);
    /* test LO8(eax), 0x43 - flags set for next jcc */
    SET_LO8(eax, LO8(eax) & 0);
    SET_LO8(eax, MEM8(0x8B002443u));
    esp++;
    /* mov fs, esp - segment register */;
    MEM32(edi + ecx * 4 + -28) = eax;

loc_002443A8:
    eax = MEM32(esi + ecx * 4 + -24);
    MEM32(edi + ecx * 4 + -24) = eax;

loc_002443B0:
    eax = MEM32(esi + ecx * 4 + -20);
    MEM32(edi + ecx * 4 + -20) = eax;

loc_002443B8:
    eax = MEM32(esi + ecx * 4 + -16);
    MEM32(edi + ecx * 4 + -16) = eax;

loc_002443C0:
    eax = MEM32(esi + ecx * 4 + -12);
    MEM32(edi + ecx * 4 + -12) = eax;

loc_002443C8:
    eax = MEM32(esi + ecx * 4 + -8);
    MEM32(edi + ecx * 4 + -8) = eax;

loc_002443D0:
    eax = MEM32(esi + ecx * 4 + -4);
    MEM32(edi + ecx * 4 + -4) = eax;
    eax = ecx * 4;
    esi = esi + eax;
    edi = edi + eax;

loc_002443E3:
    { uint32_t _jt = MEM32(edx * 4 + 0x2443EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002443FCu) goto loc_002443FC;
    if (_jt == 0x00244404u) goto loc_00244404;
    if (_jt == 0x00244410u) goto loc_00244410;
    if (_jt == 0x00244424u) goto loc_00244424;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;
    /* cld - direction flag */
    ebx++;
    SET_LO8(eax, LO8(eax) & 0);
    SET_LO8(eax, LO8(eax) + 0x44);
    SET_LO8(eax, LO8(eax) & 0);
    MEM8(esp) = MEM8(esp) + LO8(eax) + _cf; /* adc */
    SET_LO8(eax, LO8(eax) & 0x44);
    SET_LO8(eax, LO8(eax) & 0);

loc_002443FC:
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00244404:
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00244410:
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00244424:
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0024443C:
    esi = ecx + esi + -4;
    edi = ecx + edi + -4;
    if (TEST_NZ(edi, 3)) goto loc_00244470; /* jne: not equal / not zero */

loc_0024444C:
    ecx = ecx >> 2;
    edx = edx & 3;
    if (CMP_B(ecx, 8)) goto loc_00244464; /* jb: below (unsigned <) */

loc_00244457:
    /* std - direction flag */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    /* cld - direction flag */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x244588)); return; /* indirect tail jmp */

    edi = edi;

loc_00244464:
    ecx = (uint32_t)(-(int32_t)ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x244538)); return; /* indirect tail jmp */

    /* nop */

loc_00244470:
    eax = edi;
    edx = 3;
    if (CMP_B(ecx, 4)) goto loc_00244488; /* jb: below (unsigned <) */

loc_0024447C:
    eax = eax & 3;
    ecx = ecx - eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x24448C)); return; /* indirect tail jmp */

loc_00244488:
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x244588)); return; /* indirect tail jmp */

    /* nop */
    /* TODO: pushfd  */
    esp++;
    SET_LO8(eax, LO8(eax) & 0);
    MEM8(esp) = ROL32(MEM8(esp), 0xE8);
    esp++;
    SET_LO8(eax, LO8(eax) & 0);
    SET_LO8(eax, MEM8(esi + 3));
    edx = edx & ecx;
    MEM8(edi + 3) = LO8(eax);
    esi = esi - 1;
    ecx = ecx >> 2;
    edi = edi - 1;
    if (CMP_B(ecx, 8)) goto loc_00244464; /* jb: below (unsigned <) */

loc_002444B2:
    /* std - direction flag */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    /* cld - direction flag */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x244588)); return; /* indirect tail jmp */

    /* nop */
    SET_LO8(eax, MEM8(esi + 3));
    edx = edx & ecx;
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    ecx = ecx >> 2;
    MEM8(edi + 2) = LO8(eax);
    esi = esi - 2;
    edi = edi - 2;
    if (CMP_B(ecx, 8)) goto loc_00244464; /* jb: below (unsigned <) */

loc_002444DC:
    /* std - direction flag */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    /* cld - direction flag */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x244588)); return; /* indirect tail jmp */

    /* nop */
    SET_LO8(eax, MEM8(esi + 3));
    edx = edx & ecx;
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    ecx = ecx >> 2;
    MEM8(edi + 1) = LO8(eax);
    esi = esi - 3;
    edi = edi - 3;
    if (CMP_B(ecx, 8)) goto loc_00244464; /* jb: below (unsigned <) */

loc_0024450E:
    /* std - direction flag */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    /* cld - direction flag */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x244588)); return; /* indirect tail jmp */

    /* nop */
    /* cmp LO8(eax), 0x45 - flags set for next jcc */
    SET_LO8(eax, LO8(eax) & 0);
    esp++;
    ebp++;
    SET_LO8(eax, LO8(eax) & 0);
    esp--;
    ebp++;
    SET_LO8(eax, LO8(eax) & 0);
    PUSH32(esp, esp);
    ebp++;
    SET_LO8(eax, LO8(eax) & 0);
    POP32(esp, esp);
    ebp++;
    SET_LO8(eax, LO8(eax) & 0);
    ebp++;
    SET_LO8(eax, LO8(eax) & 0);
    /* TODO: insb byte ptr es:[edi], dx */
    ebp++;
    SET_LO8(eax, LO8(eax) & 0);
    if (((int32_t)LO8(eax) > 0)) { sub_0024457F(); return; } /* jg: greater (signed >) */

loc_0024453A:
    SET_LO8(eax, LO8(eax) & 0);
    eax = MEM32(esi + ecx * 4 + 0x1C);

}
