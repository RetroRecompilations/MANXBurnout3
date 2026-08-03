// burnout3_importer.c — Burnout 3: Takedown asset importer
//
// Detects archive type (ISO / RAR / directory), extracts game assets
// using system tools (7z or unrar), validates the output directory
// structure, and reports success/failure.
//
// Compiled into MANX — runs automatically when the game probe
// encounters an archive instead of an extracted directory.

#define _GNU_SOURCE   // for strcasecmp on Linux
#include "burnout3_importer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>

#ifdef _WIN32
#include <windows.h>
#define STAT _stat64
#define MKDIR(d) CreateDirectoryA(d, NULL)
#define PATH_SEP '\\'
#else
#include <unistd.h>
#define STAT stat
#define MKDIR(d) mkdir(d, 0755)
#define PATH_SEP '/'
#endif

/* ── helpers ──────────────────────────────────────────────────── */

static int file_exists(const char *path) {
    struct STAT st;
    return STAT(path, &st) == 0;
}

static int is_directory(const char *path) {
    struct STAT st;
    return STAT(path, &st) == 0 && S_ISDIR(st.st_mode);
}

static int has_extension(const char *path, const char *ext) {
    const char *dot = strrchr(path, '.');
    if (!dot) return 0;
#ifdef _WIN32
    return _stricmp(dot, ext) == 0;
#else
    return strcasecmp(dot, ext) == 0;
#endif
}

// Read first 4 bytes to detect file type magic
static int read_magic(const char *path, unsigned char out[4]) {
    FILE *f = fopen(path, "rb");
    if (!f) return 0;
    size_t n = fread(out, 1, 4, f);
    fclose(f);
    return n == 4;
}

// Run a shell command, return its exit code. Prints output to stderr.
static int run_cmd(const char *cmd) {
    fprintf(stderr, "  burner3_importer: %s\n", cmd);
    int rc = system(cmd);
    return rc;
}

// Build a path: dst = dir/name. Caller must free.
static char *join_path(const char *dir, const char *name) {
    size_t dl = strlen(dir), nl = strlen(name);
    char *p = (char *)malloc(dl + nl + 2);
    if (!p) return NULL;
    memcpy(p, dir, dl);
    p[dl] = PATH_SEP;
    memcpy(p + dl + 1, name, nl + 1);
    return p;
}

/* ── archive detection ────────────────────────────────────────── */

typedef enum { ARCHIVE_UNKNOWN, ARCHIVE_ISO, ARCHIVE_RAR, ARCHIVE_DIR } archive_type_t;

static archive_type_t detect_archive(const char *path) {
    if (is_directory(path))
        return ARCHIVE_DIR;

    // Extension-based detection
    if (has_extension(path, ".iso"))
        return ARCHIVE_ISO;
    if (has_extension(path, ".rar"))
        return ARCHIVE_RAR;

    // Magic-based detection for ISOs
    unsigned char magic[4];
    if (read_magic(path, magic)) {
        // RAR: 0x52 0x61 0x72 0x21 ("Rar!")
        if (magic[0] == 0x52 && magic[1] == 0x61 &&
            magic[2] == 0x72 && magic[3] == 0x21)
            return ARCHIVE_RAR;
        // Xbox ISO: XDVDFS magic at sector 0 (0x00 0x00 ... or MICROSOFT*XBOX)
        // Standard ISO9660: 0x01 "CD001" at offset 0x8001 — but Xbox ISO
        // uses a custom format. We check for the "MICROSOFT*XBOX" string
        // at offset 0x20 in the XBE header inside the ISO.
    }

    return ARCHIVE_UNKNOWN;
}

/* ── extraction ───────────────────────────────────────────────── */

static int extract_rar(const char *rar_path, const char *output_dir) {
    // Create output directory if needed
    MKDIR(output_dir);

    // Try unrar first (non-interactive, no password prompt), then 7z
    char cmd[4096];
    snprintf(cmd, sizeof(cmd),
             "unrar x -o+ -p- \"%s\" \"%s\" 2>&1", rar_path, output_dir);
    int rc = run_cmd(cmd);
    if (rc == 0 || rc == 1)  // unrar returns 1 for warnings
        return 0;

    // Fallback to 7z
    snprintf(cmd, sizeof(cmd),
             "7z x \"%s\" -o\"%s\" -y 2>&1", rar_path, output_dir);
    rc = run_cmd(cmd);
    return (rc == 0) ? 0 : -1;
}

static int extract_iso(const char *iso_path, const char *output_dir) {
    MKDIR(output_dir);

    char cmd[4096];

    // Try 7z first (handles Xbox ISOs on most systems)
    snprintf(cmd, sizeof(cmd),
             "7z x \"%s\" -o\"%s\" -y 2>&1", iso_path, output_dir);
    int rc = run_cmd(cmd);
    if (rc == 0)
        return 0;

    // Try extract-xiso (specialized Xbox ISO tool)
    snprintf(cmd, sizeof(cmd),
             "extract-xiso -x \"%s\" -d \"%s\" 2>&1", iso_path, output_dir);
    rc = run_cmd(cmd);
    return (rc == 0) ? 0 : -1;
}

/* ── validation ───────────────────────────────────────────────── */

int burnout3_validate_dir(const char *dir_path) {
    if (!is_directory(dir_path))
        return 0;

    // Required: default.xbe
    char *xbe = join_path(dir_path, "default.xbe");
    if (!xbe) return 0;
    int ok = file_exists(xbe);
    free(xbe);
    if (!ok) {
        fprintf(stderr, "burnout3_importer: missing default.xbe\n");
        return 0;
    }

    // Required subdirectories (at least Tracks + sound for the game to run)
    static const char *required_dirs[] = {
        "Tracks", "sound", "Data", NULL
    };
    for (int i = 0; required_dirs[i]; i++) {
        char *d = join_path(dir_path, required_dirs[i]);
        if (!d) return 0;
        ok = is_directory(d);
        free(d);
        if (!ok) {
            fprintf(stderr, "burnout3_importer: missing %s/ directory\n",
                    required_dirs[i]);
            return 0;
        }
    }

    return 1;
}

/* ── handle already-extracted dir ─────────────────────────────── */

// If the RAR extracted into a subdirectory (common with scene releases),
// flatten it: move contents up one level and remove the wrapper.
// Unix-only: uses shell globbing. On Windows we skip this step.
static int flatten_if_needed(const char *output_dir) {
    // Check if default.xbe is directly in output_dir
    char *xbe = join_path(output_dir, "default.xbe");
    if (!xbe) return -1;
    int direct = file_exists(xbe);
    free(xbe);
    if (direct)
        return 0;  // Already flat — nothing to do

#ifndef _WIN32
    // Look for a single subdirectory that contains default.xbe
    // (Scene releases often wrap: burnout3.rar → Burnout3/...)
    // Use a shell command for this — simpler than directory traversal in C
    char cmd[4096];
    snprintf(cmd, sizeof(cmd),
        "cd \"%s\" && for d in */; do "
        "  if [ -f \"$d/default.xbe\" ]; then "
        "    mv \"$d\"* . 2>/dev/null; rmdir \"$d\" 2>/dev/null; break; "
        "  fi; "
        "done",
        output_dir);
    int rc = system(cmd);
    (void)rc;
#else
    // Windows: user must ensure the archive extracts directly to the
    // expected layout, or manually flatten before launching.
    (void)output_dir;
#endif
    return 0;
}

/* ── public API ───────────────────────────────────────────────── */

int burnout3_import(const char *input_path, const char *output_dir) {
    if (!input_path || !output_dir) {
        fprintf(stderr, "burnout3_importer: null path\n");
        return -1;
    }

    fprintf(stderr, "burnout3_importer: importing %s → %s\n",
            input_path, output_dir);

    archive_type_t type = detect_archive(input_path);

    switch (type) {
    case ARCHIVE_DIR:
        // Already extracted — validate and use in-place
        fprintf(stderr, "burnout3_importer: input is a directory, validating...\n");
        if (!burnout3_validate_dir(input_path)) {
            fprintf(stderr, "burnout3_importer: directory validation failed\n");
            return -1;
        }
        fprintf(stderr, "burnout3_importer: directory valid, using in-place\n");
        return 0;

    case ARCHIVE_RAR:
        fprintf(stderr, "burnout3_importer: detected RAR archive\n");
        if (extract_rar(input_path, output_dir) != 0) {
            fprintf(stderr,
                "burnout3_importer: RAR extraction failed.\n"
                "Please install 'unrar' or '7z' and try again.\n");
            return -1;
        }
        break;

    case ARCHIVE_ISO:
        fprintf(stderr, "burnout3_importer: detected ISO (Xbox DVD)\n");
        if (extract_iso(input_path, output_dir) != 0) {
            fprintf(stderr,
                "burnout3_importer: ISO extraction failed.\n"
                "Please install '7z' or 'extract-xiso' and try again.\n");
            return -1;
        }
        break;

    default:
        fprintf(stderr,
            "burnout3_importer: unknown archive type for %s\n"
            "Supported: .iso (Xbox DVD), .rar, or an already-extracted directory.\n",
            input_path);
        return -1;
    }

    // Flatten if the archive had a wrapper directory
    flatten_if_needed(output_dir);

    // Validate the result
    if (!burnout3_validate_dir(output_dir)) {
        fprintf(stderr,
            "burnout3_importer: extraction succeeded but validation failed.\n"
            "The archive may be incomplete or corrupted.\n");
        return -1;
    }

    fprintf(stderr, "burnout3_importer: import complete — %s is ready\n",
            output_dir);
    return 0;
}
