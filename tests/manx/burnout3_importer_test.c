// burnout3_importer_test.c — Unit & integration tests for the asset importer.
//
// Compile: gcc -std=c11 -Wall -I src/xbox -I include -o test_importer
//          src/xbox/burnout3_importer.c src/xbox/burnout3_importer_test.c
// Run:     ./test_importer
//
// Tests validate archive detection, directory validation, edge cases,
// and the full import→validate flow with both real and synthetic data.

#define _GNU_SOURCE
#include "burnout3_importer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/* ── test harness ──────────────────────────────────────────────── */

static int g_passed = 0;
static int g_failed = 0;

#define TEST(name) do { \
    printf("  %-55s ", name); fflush(stdout); \
} while(0)

#define PASS() do { printf("✅ PASS\n"); g_passed++; } while(0)
#define FAIL(fmt, ...) do { \
    printf("❌ FAIL: " fmt "\n", ##__VA_ARGS__); g_failed++; \
} while(0)

static void assert_true(int cond, const char *msg) {
    if (cond) PASS(); else FAIL("%s", msg);
}

/* ── helpers ───────────────────────────────────────────────────── */

static int make_dir(const char *path) {
    struct stat st;
    if (stat(path, &st) == 0) {
        char cmd[512];
        snprintf(cmd, sizeof(cmd), "rm -rf \"%s\"", path);
        system(cmd);
    }
    return mkdir(path, 0755);
}

static int write_file(const char *path, const char *content) {
    FILE *f = fopen(path, "w");
    if (!f) return -1;
    fprintf(f, "%s", content);
    fclose(f);
    return 0;
}

/* ══════════════════════════════════════════════════════════════════
 *  Unit tests: burnout3_validate_dir
 * ══════════════════════════════════════════════════════════════════ */

static void test_validate_null(void) {
    TEST("validate_dir(NULL)");
    assert_true(burnout3_validate_dir(NULL) == 0, "NULL should fail");
}

static void test_validate_nonexistent(void) {
    TEST("validate_dir(nonexistent)");
    assert_true(burnout3_validate_dir("/tmp/burnout3_nonexistent_test_dir") == 0,
                "nonexistent should fail");
}

static void test_validate_empty_dir(void) {
    TEST("validate_dir(empty dir)");
    make_dir("/tmp/burnout3_test_empty");
    assert_true(burnout3_validate_dir("/tmp/burnout3_test_empty") == 0,
                "empty dir should fail (no default.xbe)");
    rmdir("/tmp/burnout3_test_empty");
}

static void test_validate_missing_tracks(void) {
    TEST("validate_dir(missing Tracks/)");
    make_dir("/tmp/burnout3_test_no_tracks");
    write_file("/tmp/burnout3_test_no_tracks/default.xbe", "XBEH");
    make_dir("/tmp/burnout3_test_no_tracks/sound");
    make_dir("/tmp/burnout3_test_no_tracks/Data");
    // No Tracks/ dir
    assert_true(burnout3_validate_dir("/tmp/burnout3_test_no_tracks") == 0,
                "missing Tracks/ should fail");
    // Cleanup
    unlink("/tmp/burnout3_test_no_tracks/default.xbe");
    rmdir("/tmp/burnout3_test_no_tracks/sound");
    rmdir("/tmp/burnout3_test_no_tracks/Data");
    rmdir("/tmp/burnout3_test_no_tracks");
}

static void test_validate_minimal_valid(void) {
    TEST("validate_dir(minimal valid)");
    make_dir("/tmp/burnout3_test_minimal");
    write_file("/tmp/burnout3_test_minimal/default.xbe", "XBEH");
    make_dir("/tmp/burnout3_test_minimal/Tracks");
    make_dir("/tmp/burnout3_test_minimal/sound");
    make_dir("/tmp/burnout3_test_minimal/Data");
    assert_true(burnout3_validate_dir("/tmp/burnout3_test_minimal") == 1,
                "minimal valid dir should pass");
    // Cleanup
    unlink("/tmp/burnout3_test_minimal/default.xbe");
    rmdir("/tmp/burnout3_test_minimal/Tracks");
    rmdir("/tmp/burnout3_test_minimal/sound");
    rmdir("/tmp/burnout3_test_minimal/Data");
    rmdir("/tmp/burnout3_test_minimal");
}

/* ══════════════════════════════════════════════════════════════════
 *  Unit tests: archive type detection (via import behavior)
 * ══════════════════════════════════════════════════════════════════ */

static void test_import_null(void) {
    TEST("burnout3_import(NULL, valid)");
    assert_true(burnout3_import(NULL, "/tmp/test") != 0,
                "NULL input should fail");
}

static void test_import_null_output(void) {
    TEST("burnout3_import(valid, NULL)");
    assert_true(burnout3_import("/tmp/test", NULL) != 0,
                "NULL output should fail");
}

static void test_import_unknown_file(void) {
    TEST("import(unknown file type)");
    write_file("/tmp/burnout3_test_unknown.bin", "not a game");
    assert_true(burnout3_import("/tmp/burnout3_test_unknown.bin", "/tmp/burnout3_test_out") != 0,
                "unknown file type should fail");
    unlink("/tmp/burnout3_test_unknown.bin");
}

/* ══════════════════════════════════════════════════════════════════
 *  Integration test: real Burnout 3 extracted directory
 * ══════════════════════════════════════════════════════════════════ */

static void test_integration_real_extracted_dir(void) {
    TEST("integration: real Burnout 3 extracted dir");
    const char *real = getenv("BURNOUT3_GAME_DIR");
    if (!real || !*real) {
        printf("⚠️  SKIP (set BURNOUT3_GAME_DIR to enable)\n");
        return;
    }
    struct stat st;
    if (stat(real, &st) != 0) {
        printf("⚠️  SKIP (no extracted dir at %s)\n", real);
        return;
    }
    // Validate
    int ok = burnout3_validate_dir(real);
    assert_true(ok == 1, "real extracted dir should validate");
    // Import (directory mode — should succeed in-place)
    int rc = burnout3_import(real, "/tmp/burnout3_integration_test");
    assert_true(rc == 0, "import of real dir should succeed");
    // Cleanup
    system("rm -rf /tmp/burnout3_integration_test");
}

/* ══════════════════════════════════════════════════════════════════
 *  Integration test: RAR extraction (requires unrar or 7z)
 * ══════════════════════════════════════════════════════════════════ */

static void test_integration_rar_extract(void) {
    TEST("integration: RAR extraction");
    const char *rar = getenv("BURNOUT3_RAR_PATH");
    if (!rar || !*rar) {
        printf("⚠️  SKIP (set BURNOUT3_RAR_PATH to enable)\n");
        return;
    }
    struct stat st;
    if (stat(rar, &st) != 0) {
        printf("⚠️  SKIP (no RAR at %s)\n", rar);
        return;
    }
    system("rm -rf /tmp/burnout3_rar_integration_test");
    int rc = burnout3_import(rar, "/tmp/burnout3_rar_integration_test");
    assert_true(rc == 0, "RAR import should succeed");
    // Re-validate the extracted output
    int ok = burnout3_validate_dir("/tmp/burnout3_rar_integration_test");
    assert_true(ok == 1, "extracted RAR should validate");
    // Verify key files exist
    struct stat st2;
    assert_true(stat("/tmp/burnout3_rar_integration_test/default.xbe", &st2) == 0,
                "default.xbe should exist after RAR extract");
    assert_true(stat("/tmp/burnout3_rar_integration_test/Tracks", &st2) == 0,
                "Tracks/ should exist after RAR extract");
    // Cleanup (keep for inspection if failed)
    if (g_failed == 0) system("rm -rf /tmp/burnout3_rar_integration_test");
}

/* ══════════════════════════════════════════════════════════════════
 *  Runner
 * ══════════════════════════════════════════════════════════════════ */

int main(void) {
    printf("\n╔══════════════════════════════════════════════════════════╗\n");
    printf("║   Burnout 3 Importer — Unit & Integration Tests         ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n\n");

    printf("── Unit: validate_dir ──\n");
    test_validate_null();
    test_validate_nonexistent();
    test_validate_empty_dir();
    test_validate_missing_tracks();
    test_validate_minimal_valid();

    printf("\n── Unit: import error paths ──\n");
    test_import_null();
    test_import_null_output();
    test_import_unknown_file();

    printf("\n── Integration ──\n");
    test_integration_real_extracted_dir();
    test_integration_rar_extract();

    printf("\n══════════════════════════════════════════════════════════\n");
    printf("  %d passed, %d failed\n", g_passed, g_failed);
    printf("══════════════════════════════════════════════════════════\n\n");

    return g_failed > 0 ? 1 : 0;
}
