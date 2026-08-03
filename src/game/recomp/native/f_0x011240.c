#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <dirent.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#if defined(__GNUC__)
extern const char *xbox_get_game_dir(void) __attribute__((weak));
#else
extern const char *xbox_get_game_dir(void);
#endif

static FILE *b3_open_asset_casefold(const char *game_dir,
                                    const char *guest_name,
                                    char *resolved,
                                    size_t resolved_size)
{
    char relative[512];
    char current[1024];
    char *save = NULL;
    char *part;
    size_t n;

    if (!game_dir || !game_dir[0] || !guest_name || !guest_name[0])
        return NULL;

    snprintf(relative, sizeof(relative), "%s", guest_name);
    for (n = 0; relative[n]; n++)
        if (relative[n] == '\\') relative[n] = '/';
    snprintf(current, sizeof(current), "%s", game_dir);

    for (part = strtok_r(relative, "/", &save); part;
         part = strtok_r(NULL, "/", &save)) {
        char matched[256];
        DIR *dir;
        struct dirent *entry;
        int found = 0;

        if (!strcmp(part, ".")) continue;
        if (!strcmp(part, "..")) return NULL;
        dir = opendir(current);
        if (!dir) return NULL;
        while ((entry = readdir(dir)) != NULL) {
            if (!strcasecmp(entry->d_name, part)) {
                snprintf(matched, sizeof(matched), "%s", entry->d_name);
                found = 1;
                break;
            }
        }
        closedir(dir);
        if (!found) return NULL;
        n = strlen(current);
        if (n + 1 + strlen(matched) + 1 > sizeof(current)) return NULL;
        current[n++] = '/';
        strcpy(current + n, matched);
    }

    snprintf(resolved, resolved_size, "%s", current);
    return fopen(resolved, "rb");
}
/**
 * sub_00011240
 * Original: 0x00011240 - 0x000113E4 (420 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011240(void)
{
    uint32_t ebp;
    uint32_t entry_esp = esp;
    uint32_t caller_ebx = ebx;
    uint32_t caller_ebp = g_seh_ebp;
    uint32_t caller_esi = esi;
    uint32_t caller_edi = edi;
    uint32_t queue_arg = MEM32(esp + 4);
    uint32_t name_arg = MEM32(esp + 8);
    uint32_t flag_arg = MEM32(esp + 12);
    uint32_t resource_arg = MEM32(esp + 16);
    uint32_t capacity_arg = MEM32(esp + 20);
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

    if (getenv("B3_STACK_TRACE")) {
        static unsigned traced_enqueue;
        if (traced_enqueue < 8) {
            uint32_t trace_name = MEM32(esp + 8);
            fprintf(stderr,
                    "[B3-QUEUE] enqueue=%u queue=%08X name=%08X '%.*s' flag=%08X resource=%08X param=%08X\n",
                    traced_enqueue, MEM32(esp + 4), trace_name, 80,
                    (const char *)XBOX_PTR(trace_name), MEM32(esp + 12),
                    MEM32(esp + 16), MEM32(esp + 20));
            traced_enqueue++;
        }
    }

loc_00011240:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x78C);
    PUSH32(esp, ebp);
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    PUSH32(esp, esi);
    esi = MEM32(ecx + ebx + 0x4C);
    edx = 0; /* xor self */
    /* cmp esi, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, edx)) goto loc_0001128C; /* je: equal / zero */

loc_0001125E:
    edi = edi;

loc_00011260:
    eax++;
    /* cmp eax, 0x18 - flags set for next jcc */
    MEM32(ebx + 0x78C) = eax;
    if (CMP_NE(eax, 0x18)) goto loc_00011272; /* jne: not equal / not zero */

loc_0001126C:
    MEM32(ebx + 0x78C) = edx;

loc_00011272:
    eax = MEM32(ebx + 0x78C);
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    if (CMP_EQ(MEM32(ecx + ebx + 0x4C), edx)) goto loc_0001128C; /* je: equal / zero */

loc_00011284:
    if (CMP_NE(eax, MEM32(ebx + 0x788))) goto loc_00011260; /* jne: not equal / not zero */

loc_0001128C:
    eax = MEM32(ebx + 0x78C);
    eax = eax + eax * 4;
    eax = eax << 4;
    if (CMP_EQ(MEM32(eax + ebx + 0x4C), edx)) goto loc_00011334; /* je: equal / zero */

loc_000112A2:
    ecx = MEM32(ebx + 0x788);
    eax = ecx + 1;
    /* cmp eax, 0x18 - flags set for next jcc */
    if (CMP_EQ(eax, 0x18)) eax = edx; /* cmove */
    /* cmp eax, ecx - flags set for next jcc */
    ebp = eax;
    if (CMP_EQ(eax, ecx)) goto loc_0001131D; /* je: equal / zero */

loc_000112B7:
    goto loc_000112C0;

    /* nop */

loc_000112C0:
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    if (CMP_NE(MEM32(ecx + ebx + 0x4C), edx)) goto loc_000112E9; /* jne: not equal / not zero */

loc_000112CC:
    ecx = MEM32(ebx + 0x788);

loc_000112D2:
    if (CMP_EQ(eax, ecx)) goto loc_000112E9; /* je: equal / zero */

loc_000112D6:
    eax++;
    /* cmp eax, 0x18 - flags set for next jcc */
    if (CMP_EQ(eax, 0x18)) eax = edx; /* cmove */
    esi = eax + eax * 4;
    esi = esi << 4;
    if (CMP_EQ(MEM32(esi + ebx + 0x4C), edx)) goto loc_000112D2; /* je: equal / zero */

loc_000112E9:
    if (CMP_EQ(ebp, eax)) goto loc_00011305; /* je: equal / zero */

loc_000112ED:
    esi = eax + eax * 4;
    esi = esi << 4;
    edi = ebp + ebp * 4;
    edi = edi << 4;
    esi = esi + ebx;
    edi = edi + ebx;
    ecx = 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00011305:
    ecx = MEM32(ebx + 0x788);
    eax++;
    /* cmp eax, 0x18 - flags set for next jcc */
    if (CMP_EQ(eax, 0x18)) eax = edx; /* cmove */
    ebp++;
    /* cmp ebp, 0x18 - flags set for next jcc */
    if (CMP_EQ(ebp, 0x18)) ebp = edx; /* cmove */
    if (CMP_NE(eax, ecx)) goto loc_000112C0; /* jne: not equal / not zero */

loc_0001131D:
    if (CMP_NE(ebp, MEM32(ebx + 0x788))) goto loc_0001132E; /* jne: not equal / not zero */

loc_00011325:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_0001132E:
    MEM32(ebx + 0x78C) = ebp;

loc_00011334:
    eax = MEM32(ebx + 0x78C);
    esi = MEM32(esp + 0x18);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebx;

loc_00011346:
    SET_LO8(ecx, MEM8(esi));
    esi++;
    MEM8(eax) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(edx))) goto loc_00011346; /* jne: not equal / not zero */

loc_00011350:
    eax = MEM32(ebx + 0x78C);
    ecx = MEM32(esp + 0x1C);
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(eax + ebx + 0x40) = ecx;
    eax = MEM32(ebx + 0x78C);
    ecx = MEM32(esp + 0x20);
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(eax + ebx + 0x44) = ecx;
    eax = MEM32(ebx + 0x78C);
    ecx = MEM32(esp + 0x24);
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(eax + ebx + 0x48) = ecx;
    eax = MEM32(ebx + 0x78C);
    ecx = MEM32(ebx + 0x790);
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(eax + ebx + 0x4C) = ecx;
    MEM32(ebx + 0x790) = MEM32(ebx + 0x790) + 1;
    if ((MEM32(ebx + 0x790) != 0)) goto loc_000113B4; /* jne: not equal / not zero */

loc_000113AA:
    MEM32(ebx + 0x790) = 1;

loc_000113B4:
    eax = MEM32(ebx + 0x78C);
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = MEM32(eax + ebx + 0x40);
    edi = ebx;
    MEM8(ecx) = LO8(edx);
    PUSH32(esp, 0); sub_000110E0(); /* call 0x000110E0 */

loc_000113CD:
    /* The retail queue normally creates an RW stream reader through the
     * provider registry at 0x4AED9C. That registry belongs to the Xbox
     * RenderWare platform layer and is absent in the portable runtime, so
     * sub_001B33A0 returns NULL forever. Keep the XBE queue and destination
     * buffers, but perform the missing provider's one job here: read the
     * requested asset into the caller-supplied Xbox buffer and signal its
     * real completion byte. This is also portable to Android and avoids an
     * additional stream-reader plugin. */
    if (MEM32(queue_arg + 0x780u) == 0 &&
        name_arg >= 0x10000u && name_arg < 0x04000000u &&
        flag_arg >= 0x10000u && flag_arg < 0x04000000u &&
        resource_arg >= 0x10000u && resource_arg < 0x04000000u &&
        capacity_arg > 0 && capacity_arg <= 0x04000000u &&
        resource_arg + capacity_arg >= resource_arg &&
        resource_arg + capacity_arg <= 0x04000000u) {
        const char *game_dir = xbox_get_game_dir ? xbox_get_game_dir() : NULL;
        const char *guest_name = (const char *)XBOX_PTR(name_arg);
        char host_path[1024];
        FILE *asset = NULL;

        if (game_dir && game_dir[0]) {
            asset = b3_open_asset_casefold(game_dir, guest_name,
                                           host_path, sizeof(host_path));
        }
        if (!asset) {
            snprintf(host_path, sizeof(host_path), "%s", guest_name);
            asset = fopen(host_path, "rb");
        }

        if (asset) {
            size_t loaded = fread((void *)XBOX_PTR(resource_arg), 1,
                                  (size_t)capacity_arg, asset);
            fclose(asset);
            if (loaded > 0) {
                uint32_t slot = MEM32(queue_arg + 0x78C) % 0x18u;
                MEM32(queue_arg + slot * 0x50u + 0x4Cu) = 0;
                MEM8(flag_arg) = 1;
                fprintf(stderr,
                        "  [B3-LOAD] '%s' -> %08X (%zu/%u bytes) complete\n",
                        host_path, resource_arg, loaded, capacity_arg);

                eax = MEM32(queue_arg + 0x790);
                ebx = caller_ebx;
                ebp = caller_ebp;
                esi = caller_esi;
                edi = caller_edi;
                esp = entry_esp + 24u; /* ret 20 */
                return;
            }
        } else {
            fprintf(stderr, "  [B3-LOAD] cannot open '%s'\n", host_path);
        }
    }

    eax = MEM32(ebx + 0x78C);
    POP32(esp, edi);
    edx = eax + eax * 4;
    POP32(esp, esi);
    edx = edx << 4;
    eax = MEM32(edx + ebx + 0x4C);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}
