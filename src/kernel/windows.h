// windows.h — Cross-platform stub for the Burnout3Recomp kernel layer.
//
// Includes d3d8_portable.h for all shared base types (BOOL, DWORD, ULONG,
// LARGE_INTEGER, HRESULT, GUID, CRITICAL_SECTION, etc.) and adds only
// NT-specific types and Win32 API prototypes that the kernel files need.
//
// Compiles on Linux (GCC/Clang), Windows (MSVC/MinGW), and Android (NDK).

#ifndef BURNOUT3_KERNEL_PORTABLE_WINDOWS_H
#define BURNOUT3_KERNEL_PORTABLE_WINDOWS_H

#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Shared base types from the D3D8 portable layer.
// The game code includes both <windows.h> and d3d8_xbox.h (→ d3d8_portable.h).
// By pulling in d3d8_portable.h here first, all shared types (BOOL, DWORD,
// ULONG, LARGE_INTEGER, HRESULT, GUID, CRITICAL_SECTION, etc.) come from
// a single source and never conflict.
#include "d3d8_portable.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ═══════════════════════════════════════════════════════════════
 *  Types NOT in d3d8_portable.h — NT/kernel-specific
 * ═══════════════════════════════════════════════════════════════ */

typedef uint8_t       UCHAR, BOOLEAN;
typedef uint64_t      ULONGLONG;
typedef int64_t       LONGLONG;
typedef char          CHAR;
typedef wchar_t       WCHAR;
typedef void          VOID;
typedef void         *PVOID, *LPVOID, *HANDLE;
typedef const void   *LPCVOID;
typedef char         *PCHAR, *LPSTR;
typedef const char   *LPCSTR;
typedef WCHAR        *PWCHAR, *LPWSTR;
typedef const WCHAR  *LPCWSTR;
typedef size_t        SIZE_T;
typedef uintptr_t     ULONG_PTR, DWORD_PTR;
typedef ptrdiff_t     LONG_PTR;
typedef intptr_t      INT_PTR;
typedef HANDLE       *PHANDLE, *LPHANDLE;
typedef SIZE_T       *PSIZE_T;
typedef ULONG        *PULONG;
typedef LONG         *PLONG;
typedef DWORD        *PDWORD;
typedef UINT         *PUINT;
typedef BOOL         *PBOOL;
typedef USHORT       *PUSHORT;
typedef UCHAR        *PUCHAR;

#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE  1
#endif
#ifndef NULL
#define NULL ((void*)0)
#endif

/* ═══════════════════════════════════════════════════════════════
 *  Calling conventions (ignored on x86-64)
 * ═══════════════════════════════════════════════════════════════ */

#ifndef __stdcall
#  if defined(__i386__) || defined(_M_IX86)
#    define __stdcall __attribute__((stdcall))
#  else
#    define __stdcall
#  endif
#endif
#define __fastcall
#define __cdecl
#define WINAPI    __stdcall
#define CALLBACK  __stdcall
#define WINAPIV   __cdecl
#define APIENTRY  __stdcall

/* ═══════════════════════════════════════════════════════════════
 *  NT types
 * ═══════════════════════════════════════════════════════════════ */

typedef LONG   NTSTATUS;
typedef UCHAR  KIRQL, *PKIRQL;
typedef CHAR   CCHAR;
typedef CCHAR  KPROCESSOR_MODE;
typedef LONG   KPRIORITY;
typedef ULONG  ACCESS_MASK;

#ifndef _MODE_DEFINED
#define KernelMode  0
#define UserMode    1
#endif

/* ═══════════════════════════════════════════════════════════════
 *  PLARGE_INTEGER (not in d3d8_portable.h)
 * ═══════════════════════════════════════════════════════════════ */

typedef LARGE_INTEGER *PLARGE_INTEGER;

/* RTL_CRITICAL_SECTION & PRTL_CRITICAL_SECTION are provided by
 * d3d8_portable.h (included above).  Do not redefine them here. */

/* ═══════════════════════════════════════════════════════════════
 *  Memory allocation stubs
 * ═══════════════════════════════════════════════════════════════ */

PVOID WINAPI VirtualAlloc(PVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
BOOL  WINAPI VirtualFree(PVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
BOOL  WINAPI VirtualProtect(PVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);

#define MEM_COMMIT      0x00001000
#define MEM_RESERVE     0x00002000
#define MEM_RELEASE     0x00008000
#define MEM_DECOMMIT    0x00004000
#define PAGE_NOACCESS           0x01
#define PAGE_READONLY           0x02
#define PAGE_READWRITE          0x04
#define PAGE_EXECUTE_READWRITE  0x40

/* ═══════════════════════════════════════════════════════════════
 *  File I/O stubs
 * ═══════════════════════════════════════════════════════════════ */

#define INVALID_HANDLE_VALUE  ((HANDLE)(intptr_t)-1)
#define INVALID_FILE_SIZE     ((DWORD)-1)
#define GENERIC_READ          0x80000000
#define GENERIC_WRITE         0x40000000
#define GENERIC_ALL           0x10000000
#define FILE_SHARE_READ       0x00000001
#define FILE_SHARE_WRITE      0x00000002
#define FILE_SHARE_DELETE     0x00000004
#define OPEN_EXISTING         3
#define CREATE_NEW            1
#define CREATE_ALWAYS         2
#define OPEN_ALWAYS           4
#define TRUNCATE_EXISTING     5
#define FILE_ATTRIBUTE_NORMAL   0x00000080
#define FILE_ATTRIBUTE_READONLY 0x00000001
#define FILE_ATTRIBUTE_DIRECTORY 0x00000010
#define FILE_BEGIN            0
#define FILE_CURRENT          1
#define FILE_END              2
#define INVALID_FILE_ATTRIBUTES ((DWORD)-1)

// File I/O — see inline stubs below
// (CreateFileA, ReadFile, CloseHandle, GetFileSize are static inline)
BOOL   WINAPI DeleteFileA(LPCSTR);
DWORD  WINAPI GetFileAttributesA(LPCSTR);

/* ── FILETIME ── */
typedef struct _FILETIME { DWORD dwLowDateTime; DWORD dwHighDateTime; } FILETIME, *PFILETIME, *LPFILETIME;

/* ── BY_HANDLE_FILE_INFORMATION ── */
typedef struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes; FILETIME ftCreationTime, ftLastAccessTime, ftLastWriteTime;
    DWORD dwVolumeSerialNumber, nFileSizeHigh, nFileSizeLow, nNumberOfLinks, nFileIndexHigh, nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION, *LPBY_HANDLE_FILE_INFORMATION;
BOOL WINAPI GetFileInformationByHandle(HANDLE, LPBY_HANDLE_FILE_INFORMATION);

/* ── OVERLAPPED ── */
typedef struct _OVERLAPPED {
    ULONG_PTR Internal, InternalHigh;
    union { struct { DWORD Offset, OffsetHigh; }; PVOID Pointer; };
    HANDLE hEvent;
} OVERLAPPED, *LPOVERLAPPED;

/* ── File info structures ── */
typedef struct _FILE_DISPOSITION_INFO { BOOLEAN DeleteFile; } FILE_DISPOSITION_INFO;
typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
    DWORD dwFileAttributes; FILETIME ftCreationTime, ftLastAccessTime, ftLastWriteTime;
    DWORD nFileSizeHigh, nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA;

// File pointer ops — see inline SetFilePointer stub below
BOOL WINAPI SetFileInformationByHandle(HANDLE, int, PVOID, DWORD);
BOOL WINAPI GetFileAttributesExW(LPCWSTR, int, PVOID);
#define FileDispositionInfo  13
#define GetFileExInfoStandard 0

/* ── WIN32_FIND_DATA ── */
typedef struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes; FILETIME ftCreationTime, ftLastAccessTime, ftLastWriteTime;
    DWORD nFileSizeHigh, nFileSizeLow, dwReserved0, dwReserved1;
    WCHAR cFileName[260], cAlternateFileName[14];
} WIN32_FIND_DATAW;
HANDLE WINAPI FindFirstFileW(LPCWSTR, WIN32_FIND_DATAW*);
BOOL   WINAPI FindNextFileW(HANDLE, WIN32_FIND_DATAW*);
BOOL   WINAPI FindClose(HANDLE);

/* ── Wide file ops ── */
BOOL   WINAPI CreateDirectoryW(LPCWSTR, PVOID);
HANDLE WINAPI CreateFileW(LPCWSTR, DWORD, DWORD, PVOID, DWORD, DWORD, HANDLE);
BOOL   WINAPI DeleteFileW(LPCWSTR);
BOOL   WINAPI RemoveDirectoryW(LPCWSTR);
DWORD  WINAPI GetFinalPathNameByHandleW(HANDLE, LPWSTR, DWORD, DWORD);
#define FILE_NAME_NORMALIZED 0

/* ── File flags ── */
#define FILE_FLAG_BACKUP_SEMANTICS 0x02000000
#define FILE_FLAG_NO_BUFFERING     0x20000000
#define FILE_FLAG_SEQUENTIAL_SCAN  0x08000000
#define ERROR_HANDLE_EOF           38L

/* ═══════════════════════════════════════════════════════════════
 *  Sync / threading / time stubs
 * ═══════════════════════════════════════════════════════════════ */

VOID   WINAPI Sleep(DWORD);
DWORD  WINAPI GetTickCount(VOID);
VOID   WINAPI InitializeCriticalSection(PRTL_CRITICAL_SECTION);
VOID   WINAPI EnterCriticalSection(PRTL_CRITICAL_SECTION);
VOID   WINAPI LeaveCriticalSection(PRTL_CRITICAL_SECTION);
VOID   WINAPI DeleteCriticalSection(PRTL_CRITICAL_SECTION);

HANDLE WINAPI CreateEventA(PVOID, BOOL, BOOL, LPCSTR);
HANDLE WINAPI CreateEventW(PVOID, BOOL, BOOL, LPCWSTR);
BOOL   WINAPI SetEvent(HANDLE);
BOOL   WINAPI ResetEvent(HANDLE);
DWORD  WINAPI WaitForSingleObject(HANDLE, DWORD);

#define WAIT_OBJECT_0  0x00000000L
#define WAIT_TIMEOUT   0x00000102L
#define INFINITE       0xFFFFFFFF

HANDLE WINAPI CreateThread(PVOID, SIZE_T, PVOID, PVOID, DWORD, PDWORD);
VOID   WINAPI ExitThread(DWORD);
DWORD  WINAPI GetCurrentThreadId(VOID);
HANDLE WINAPI GetCurrentProcess(VOID);
DWORD  WINAPI GetCurrentProcessId(VOID);
#define CREATE_SUSPENDED      0x00000004
#define DUPLICATE_SAME_ACCESS 0x00000002
#define THREAD_PRIORITY_NORMAL 0

HANDLE WINAPI GetProcessHeap(VOID);
PVOID  WINAPI HeapAlloc(HANDLE, DWORD, SIZE_T);
BOOL   WINAPI HeapFree(HANDLE, DWORD, PVOID);
#define HEAP_ZERO_MEMORY 0x00000008

/* ── Time ── */
typedef struct _SYSTEMTIME {
    WORD wYear, wMonth, wDayOfWeek, wDay, wHour, wMinute, wSecond, wMilliseconds;
} SYSTEMTIME, *LPSYSTEMTIME;
VOID WINAPI GetSystemTime(SYSTEMTIME*);
VOID WINAPI GetLocalTime(SYSTEMTIME*);
VOID WINAPI GetSystemTimeAsFileTime(LPFILETIME);

/* ═══════════════════════════════════════════════════════════════
 *  String / path / misc
 * ═══════════════════════════════════════════════════════════════ */

#define MAX_PATH 260

int WINAPIV wsprintfA(LPSTR, LPCSTR, ...);
int WINAPIV wsprintfW(LPWSTR, LPCWSTR, ...);

/* Wide char conversion */
#define CP_UTF8  65001
#define CP_ACP   0
int WINAPI MultiByteToWideChar(UINT, DWORD, LPCSTR, int, LPWSTR, int);
int WINAPI WideCharToMultiByte(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, BOOL*);
DWORD WINAPI GetCurrentDirectoryW(DWORD, LPWSTR);

/* File mapping */
#define FILE_MAP_ALL_ACCESS 0x000F001F
HANDLE WINAPI CreateFileMappingA(HANDLE, PVOID, DWORD, DWORD, DWORD, LPCSTR);
PVOID  WINAPI MapViewOfFileEx(HANDLE, DWORD, DWORD, DWORD, SIZE_T, PVOID);
BOOL   WINAPI UnmapViewOfFile(PVOID);
DWORD  WINAPI GetLastError(VOID);

/* Misc */
VOID WINAPI OutputDebugStringA(LPCSTR);
DWORD WINAPI GetStdHandle(DWORD);
#define STD_OUTPUT_HANDLE ((DWORD)-11)

/* Shell */
#define CSIDL_LOCAL_APPDATA 0x001c
#define SHGFP_TYPE_CURRENT 0
HRESULT WINAPI SHGetFolderPathA(HWND, int, HANDLE, DWORD, LPSTR);

/* _aligned_malloc (MSVC → C11) */
#ifndef _aligned_malloc
static inline void *_aligned_malloc(size_t size, size_t alignment) { return aligned_alloc(alignment, size); }
#endif
#ifndef _aligned_free
static inline void _aligned_free(void *ptr) { free(ptr); }
#endif

/* VC runtime */
#ifndef _clearfp
static inline unsigned int _clearfp(void) { return 0; }
#endif

/* MSVC string functions → POSIX */
#include <strings.h>   /* strcasecmp */
#ifndef _stricmp
#define _stricmp strcasecmp
#endif
#ifndef _strnicmp
#define _strnicmp strncasecmp
#endif

#define INVALID_FILE_SIZE ((DWORD)-1)
#define ERROR_SUCCESS 0

/* ═══════════════════════════════════════════════════════════════
 *  WinMain / Windows subsystem
 * ═══════════════════════════════════════════════════════════════ */

#define WINAPI_FAMILY_DESKTOP_APP 1
#define WIDE(s) L##s

// ═══════════════════════════════════════════════════════════════
//  Game-specific stubs (fe_menu.c, main.c)
// ═══════════════════════════════════════════════════════════════

// Virtual key codes (subset used by Burnout 3)
#define VK_ESCAPE   0x1B
#define VK_RETURN   0x0D
#define VK_SPACE    0x20
#define VK_BACK     0x08
#define VK_UP       0x26
#define VK_DOWN     0x28
#define VK_LEFT     0x25
#define VK_RIGHT    0x27
#define VK_SHIFT    0x10
#define VK_CONTROL  0x11
#define VK_TAB      0x09
#define VK_F1       0x70
#define VK_F2       0x71
#define VK_F12      0x7B
#define VK_R        0x52
#define VK_G        0x47
#define VK_M        0x4D
#define VK_N        0x4E
#define VK_P        0x50
#define VK_T        0x54
#define VK_W        0x57
#define VK_A        0x41
#define VK_S        0x53
#define VK_D        0x44
#define VK_E        0x45

// Xbox memory access macros and offset
extern ptrdiff_t g_xbox_mem_offset;
#define MEM32(addr)  (*(volatile uint32_t *)((uintptr_t)(addr) + g_xbox_mem_offset))
#define MEM16(addr)  (*(volatile uint16_t *)((uintptr_t)(addr) + g_xbox_mem_offset))
#define MEM8(addr)   (*(volatile uint8_t  *)((uintptr_t)(addr) + g_xbox_mem_offset))

// Keyboard state bitmask (extern: populated by the session before game_frame_pump)
extern uint64_t g_keyboard_state[4];

// GetAsyncKeyState stub — reads from g_keyboard_state[] bitmask.
// Returns 0x8000 if the key is held, 0 otherwise.
static inline int16_t GetAsyncKeyState(int vKey) {
    if (vKey < 0 || vKey > 255) return 0;
    int word = vKey / 64;
    int bit  = vKey % 64;
    return (g_keyboard_state[word] & (1ULL << bit)) ? (int16_t)0x8000 : 0;
}

// Window management stubs (fe_menu.c updates window title during races)
static inline HWND FindWindowA(LPCSTR, LPCSTR)   { return (HWND)1; }
static inline HWND GetActiveWindow(void)          { return (HWND)1; }
static inline BOOL SetWindowTextA(HWND, LPCSTR)   { return TRUE; }

// File I/O stubs (txd_loader.c, bgv_loader.c use Win32 file APIs)
#define INVALID_HANDLE_VALUE ((HANDLE)-1)
#define INVALID_FILE_SIZE     ((DWORD)-1)
#define GENERIC_READ          0x80000000
#define FILE_SHARE_READ       0x00000001
#define OPEN_EXISTING         3
#define FILE_ATTRIBUTE_NORMAL 0x80
#define FILE_BEGIN            0
#define FILE_CURRENT           1
#define FILE_END               2

static inline HANDLE CreateFileA(LPCSTR name, DWORD access, DWORD share,
                                  void *sec, DWORD disp, DWORD attr, HANDLE tmpl) {
    (void)access; (void)share; (void)sec; (void)disp; (void)attr; (void)tmpl;
    return (HANDLE)(intptr_t)fopen(name, "rb");
}
static inline DWORD GetFileSize(HANDLE h, DWORD *high) {
    if (high) *high = 0;
    FILE *f = (FILE *)(intptr_t)h;
    if (!f) return INVALID_FILE_SIZE;
    long cur = ftell(f);
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, cur, SEEK_SET);
    return (DWORD)sz;
}
static inline BOOL ReadFile(HANDLE h, void *buf, DWORD n, DWORD *read, void *ov) {
    (void)ov;
    FILE *f = (FILE *)(intptr_t)h;
    if (!f) return FALSE;
    size_t r = fread(buf, 1, n, f);
    if (read) *read = (DWORD)r;
    return (r == n) ? TRUE : FALSE;
}
static inline BOOL CloseHandle(HANDLE h) {
    FILE *f = (FILE *)(intptr_t)h;
    if (f && f != (FILE *)-1) fclose(f);
    return TRUE;
}
#define GetLastError() 0

// SetFilePointer stub
static inline DWORD SetFilePointer(HANDLE h, LONG dist, LONG *high, DWORD method) {
    FILE *f = (FILE *)(intptr_t)h;
    if (!f) return INVALID_FILE_SIZE;
    int origin = (method == FILE_BEGIN) ? SEEK_SET :
                 (method == FILE_CURRENT) ? SEEK_CUR : SEEK_END;
    fseek(f, dist, origin);
    return (DWORD)ftell(f);
}

// XInput stub types (used by game_frame_pump)
typedef struct {
    uint16_t wButtons;
    uint8_t  bLeftTrigger;
    uint8_t  bRightTrigger;
    int16_t  sThumbLX;
    int16_t  sThumbLY;
    int16_t  sThumbRX;
    int16_t  sThumbRY;
} XINPUT_STATE;

#define XINPUT_GAMEPAD_A             0x1000
#define XINPUT_GAMEPAD_B             0x2000
#define XINPUT_GAMEPAD_X             0x4000
#define XINPUT_GAMEPAD_Y             0x8000
#define XINPUT_GAMEPAD_DPAD_UP       0x0001
#define XINPUT_GAMEPAD_DPAD_DOWN     0x0002
#define XINPUT_GAMEPAD_DPAD_LEFT     0x0004
#define XINPUT_GAMEPAD_DPAD_RIGHT    0x0008
#define XINPUT_GAMEPAD_START         0x0010
#define XINPUT_GAMEPAD_BACK          0x0020

extern uint16_t g_xinput_buttons;
extern int16_t  g_xinput_thumb_lx;
extern int16_t  g_xinput_thumb_ly;
extern uint8_t  g_xinput_left_trigger;
extern uint8_t  g_xinput_right_trigger;

static inline unsigned long XInputGetState(unsigned long dwUserIndex,
                                            XINPUT_STATE *pState) {
    if (dwUserIndex != 0 || !pState)
        return 0x0001; // ERROR_DEVICE_NOT_CONNECTED
    // Only report connected if any input is actually active
    if (!g_xinput_buttons && !g_xinput_left_trigger &&
        !g_xinput_right_trigger && !g_xinput_thumb_lx && !g_xinput_thumb_ly)
        return 0x0001;
    pState->wButtons        = g_xinput_buttons;
    pState->bLeftTrigger    = g_xinput_left_trigger;
    pState->bRightTrigger   = g_xinput_right_trigger;
    pState->sThumbLX        = g_xinput_thumb_lx;
    pState->sThumbLY        = g_xinput_thumb_ly;
    pState->sThumbRX        = 0;
    pState->sThumbRY        = 0;
    return 0; // ERROR_SUCCESS
}

// ── NV2A push buffer replay stubs (rw_bridge.c, fe_menu.c) ──
static inline void nv2a_pb_replay_set_active(int active) { (void)active; }
static inline int  nv2a_pb_replay_is_active(void)        { return 0; }
static inline void nv2a_pb_replay_frame(void)              { }
static inline void parse_live_pushbuffer(void)             { }

// ── Menu GUI stubs (rw_bridge.c uses ImGui-based menu_gui) ───
static inline void menu_gui_begin_frame(void) { }
static inline void menu_gui_render(void)      { }

// ── Video player stubs (rw_bridge.c uses video_player.c) ─────
static inline int  video_open(const char *path) { (void)path; return 0; }
static inline int  video_update(float dt)       { (void)dt; return 0; }
static inline void video_render(void)            { }

// ── Camera globals (rw_bridge.c) ──────────────────────────────
extern int      g_created_camera_count;
extern uint32_t g_created_cameras[];

// ── Frame counter (rw_bridge.c) ───────────────────────────────
extern volatile uint32_t g_present_count;

// ── APU mixer stubs (awd_loader.c) ────────────────────────────
static inline void apu_mixer_stop(int voice)        { (void)voice; }
static inline void apu_mixer_free_voice(int voice)   { (void)voice; }
static inline int  apu_mixer_get_voice(void)         { return -1; }
static inline int  apu_mixer_alloc_voice(int prio)   { (void)prio; return -1; }
static inline void apu_mixer_play(int voice, int fmt, const void *data,
                                   int bytes, int freq) {
    (void)voice; (void)fmt; (void)data; (void)bytes; (void)freq;
}

#ifdef __cplusplus
}
#endif

#endif /* BURNOUT3_KERNEL_PORTABLE_WINDOWS_H */
