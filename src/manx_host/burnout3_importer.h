// burnout3_importer.h — Burnout 3: Takedown asset importer
//
// Extracts game assets from ISO (Xbox DVD) or RAR archives into a
// directory that the recompiled runtime can read directly.
// Called by the game probe when it encounters an archive instead of
// an already-extracted game directory.
//
// Cross-platform C — compiles on Linux, Windows, Android.

#ifndef BURNOUT3_IMPORTER_H
#define BURNOUT3_IMPORTER_H

#ifdef __cplusplus
extern "C" {
#endif

// Import Burnout 3 assets from an archive or directory.
//
// input_path:   path to an ISO file, RAR file, or already-extracted dir
// output_dir:   where to place the extracted game files
//
// Returns 0 on success, non-zero on failure.
// On success, output_dir will contain default.xbe plus the standard
// game subdirectories (Data/, Tracks/, sound/, Graphics/, ovid/, pveh/).
//
// If input_path is already an extracted directory, it validates the
// structure and returns success without copying (caller uses it in-place).
int burnout3_import(const char *input_path, const char *output_dir);

// Validate a directory as a Burnout 3 game installation.
// Returns 1 if valid (contains default.xbe + key subdirectories), 0 if not.
int burnout3_validate_dir(const char *dir_path);

#ifdef __cplusplus
}
#endif

#endif // BURNOUT3_IMPORTER_H
