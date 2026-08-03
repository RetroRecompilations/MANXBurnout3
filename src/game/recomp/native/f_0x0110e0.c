#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_000110E0
 * Original: 0x000110E0 - 0x00011236 (342 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000110E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000110E0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x4AED9C);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_00011110; /* je: equal / zero */

loc_000110EE:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000110F5:
    if (CMP_NE(eax, 6)) goto loc_0001110A; /* jne: not equal / not zero */

loc_000110FA:
    ecx = MEM32(0x4AED9C);
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000214B0(); /* call 0x000214B0 */

loc_0001110A:
    esi = MEM32(0x4AED9C);

loc_00011110:
    eax = MEM32(edi + 0x788);
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = MEM32(eax + edi + 0x4C);
    /* cmp ecx, ebx - flags set for next jcc */
    eax = eax + edi + 0x4C;
    if (getenv("B3_STACK_TRACE")) {
        static unsigned traced_queue;
        if (traced_queue < 8) {
            fprintf(stderr,
                    "[B3-QUEUE] tick=%u queue=%08X head=%u tail=%u entry_status=%08X reader=%08X\n",
                    traced_queue, edi, MEM32(edi + 0x788), MEM32(edi + 0x78C),
                    ecx, MEM32(edi + 0x780));
            traced_queue++;
        }
    }
    if (CMP_EQ(ecx, ebx)) goto loc_00011233; /* je: equal / zero */

loc_0001112C:
    ecx = MEM32(edi + 0x780);
    if (CMP_EQ(ecx, ebx)) goto loc_000111AB; /* je: equal / zero */

loc_00011136:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001113B:
    if (getenv("B3_STACK_TRACE")) {
        static unsigned traced_reader_poll;
        if (traced_reader_poll < 8) {
            fprintf(stderr, "[B3-QUEUE] reader poll=%u result=%08X reader=%08X\n",
                    traced_reader_poll, eax, MEM32(edi + 0x780));
            traced_reader_poll++;
        }
    }
    if (CMP_EQ(eax, 2)) goto loc_00011233; /* je: equal / zero */

loc_00011144:
    /* cmp MEM8(edi + 0x785), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(edi + 0x780);
    if (CMP_EQ(MEM8(edi + 0x785), LO8(ebx))) goto loc_00011177; /* je: equal / zero */

loc_00011152:
    eax = MEM32(edi + 0x788);
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM8(edi + 0x785) = LO8(ebx);
    esi = MEM32(eax + edi + 0x48);
    edx = MEM32(ecx);
    eax = eax + edi;
    eax = MEM32(eax + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00011174:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00011177:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001117C:
    /* cmp MEM8(edi + 0x784), LO8(ebx) - flags set for next jcc */
    MEM32(edi + 0x780) = ebx;
    if (CMP_NE(MEM8(edi + 0x784), LO8(ebx))) goto loc_00011233; /* jne: not equal / not zero */

loc_0001118E:
    eax = MEM32(edi + 0x788);
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = MEM32(eax + edi + 0x40);
    POP32(esp, esi);
    MEM8(ecx) = 1;
    MEM8(edi + 0x784) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000111AB:
    if (CMP_EQ(MEM8(edi + 0x784), LO8(ebx))) goto loc_00011208; /* je: equal / zero */

loc_000111B3:
    MEM8(edi + 0x784) = LO8(ebx);
    MEM32(eax) = ebx;
    edx = MEM32(edi + 0x788);
    if (CMP_EQ(edx, MEM32(edi + 0x78C))) goto loc_00011202; /* je: equal / zero */

loc_000111C9:
    /* nop */

loc_000111D0:
    eax = MEM32(edi + 0x788);
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    if (CMP_NE(MEM32(ecx + edi + 0x4C), ebx)) goto loc_00011202; /* jne: not equal / not zero */

loc_000111E2:
    eax++;
    /* cmp eax, 0x18 - flags set for next jcc */
    MEM32(edi + 0x788) = eax;
    if (CMP_NE(eax, 0x18)) goto loc_000111F4; /* jne: not equal / not zero */

loc_000111EE:
    MEM32(edi + 0x788) = ebx;

loc_000111F4:
    edx = MEM32(edi + 0x788);
    if (CMP_NE(edx, MEM32(edi + 0x78C))) goto loc_000111D0; /* jne: not equal / not zero */

loc_00011202:
    esi = MEM32(0x4AED9C);

loc_00011208:
    eax = MEM32(edi + 0x788);
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = MEM32(eax + edi + 0x4C);
    eax = eax + edi;
    if (CMP_EQ(ecx, ebx)) goto loc_00011233; /* je: equal / zero */

loc_0001121E:
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001B33A0(); /* call 0x001B33A0 */

loc_00011226:
    MEM32(edi + 0x780) = eax;
    MEM8(edi + 0x785) = 1;
    if (getenv("B3_STACK_TRACE")) {
        static unsigned traced_reader_create;
        if (traced_reader_create < 8) {
            fprintf(stderr, "[B3-QUEUE] created reader=%08X entry=%u status=%08X\n",
                    eax, MEM32(edi + 0x788),
                    MEM32(edi + MEM32(edi + 0x788) * 0x50u + 0x4Cu));
            traced_reader_create++;
        }
    }

loc_00011233:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
