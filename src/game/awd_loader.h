/*
 * AWD (Audio Wave Dictionary) loader for Burnout 3
 *
 * Loads Criterion's RenderWare AWD files, decodes Xbox ADPCM to PCM,
 * and plays them through the APU software mixer.
 */
#pragma once

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define AWD_MAX_ENTRIES 64

typedef struct AWDEntry {
    char     name[16];
    uint32_t data_offset;  /* Offset from data section start */
    uint32_t data_size;    /* ADPCM data size in bytes */
    uint32_t sample_rate;
    uint32_t channels;
    int16_t *pcm_data;     /* Decoded PCM (allocated) */
    uint32_t pcm_bytes;    /* PCM data size in bytes */
    int      mixer_slot;   /* APU mixer voice slot, -1 if not playing */
} AWDEntry;

typedef struct AWDFile {
    AWDEntry entries[AWD_MAX_ENTRIES];
    int      num_entries;
    char     filename[64];
} AWDFile;

/* Load an AWD file and decode all entries to PCM. */
AWDFile *awd_load(const char *path);

/* Free an AWD file and all decoded PCM data. */
void awd_free(AWDFile *awd);

/* Play a sound by name. Returns entry index or -1 if not found. */
int awd_play(AWDFile *awd, const char *name, bool looping);

/* Stop a sound by name. */
void awd_stop(AWDFile *awd, const char *name);

/* Play a sound by index. */
void awd_play_index(AWDFile *awd, int index, bool looping);

/* Stop all playing sounds from this AWD. */
void awd_stop_all(AWDFile *awd);

#ifdef __cplusplus
}
#endif
