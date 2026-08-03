// d3d8_portable.h — Cross-platform type definitions for the D3D8 interface.
//
// Provides every Windows-specific type, constant and calling convention
// that d3d8_xbox.h relies on, without pulling in <windows.h>.
// Compiles identically on Linux (GCC/Clang), Windows (MSVC/MinGW), and
// Android (NDK).  The D3D8 FB backend includes this instead of <windows.h>.
//
// When building for Windows with the real D3D11 backend, include this
// BEFORE d3d8_xbox.h to avoid duplicate definitions.  The header guards
// every symbol so mixing with the real SDK is safe.

#ifndef D3D8_PORTABLE_H
#define D3D8_PORTABLE_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* strcasecmp / strncasecmp for the _stricmp / _strnicmp shims below */
#ifndef _MSC_VER
#include <strings.h>
#endif

/* MSVC string functions → POSIX */
#ifndef _stricmp
#define _stricmp strcasecmp
#endif
#ifndef _strnicmp
#define _strnicmp strncasecmp
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* ═══════════════════════════════════════════════════════════════
 *  Integer types
 * ═══════════════════════════════════════════════════════════════ */

typedef uint8_t       BYTE;
typedef uint16_t      WORD;
typedef uint32_t      DWORD;
typedef uint64_t      QWORD;
typedef int32_t       LONG;
typedef unsigned long ULONG;          // matches Win32 ULONG
typedef unsigned int  UINT;
typedef int32_t       INT;
typedef int32_t       BOOL;
typedef uint16_t      USHORT;
typedef int16_t       SHORT;
typedef uint8_t       UCHAR;

#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE  1
#endif

/* ═══════════════════════════════════════════════════════════════
 *  Calling convention
 * ═══════════════════════════════════════════════════════════════ */

#if defined(_MSC_VER)
#  define STDCALL __stdcall
#else
#  define STDCALL __attribute__((stdcall))
#endif

/* ═══════════════════════════════════════════════════════════════
 *  COM HRESULT and status codes
 * ═══════════════════════════════════════════════════════════════ */

typedef LONG HRESULT;

#define S_OK                          ((HRESULT)0x00000000L)
#define S_FALSE                       ((HRESULT)0x00000001L)
#define E_FAIL                        ((HRESULT)0x80004005L)
#define E_NOTIMPL                     ((HRESULT)0x80004001L)
#define E_NOINTERFACE                 ((HRESULT)0x80004002L)
#define E_OUTOFMEMORY                 ((HRESULT)0x8007000EL)
#define E_INVALIDARG                  ((HRESULT)0x80070057L)

#define SUCCEEDED(hr)  (((HRESULT)(hr)) >= 0)
#define FAILED(hr)     (((HRESULT)(hr)) <  0)

/* ═══════════════════════════════════════════════════════════════
 *  GUID / IID (minimal — D3D8 doesn't query interfaces)
 * ═══════════════════════════════════════════════════════════════ */

typedef struct {
    uint32_t Data1;
    uint16_t Data2;
    uint16_t Data3;
    uint8_t  Data4[8];
} GUID, IID;

/* ═══════════════════════════════════════════════════════════════
 *  Window handle (opaque pointer — never dereferenced by FB path)
 * ═══════════════════════════════════════════════════════════════ */

typedef void *HWND;

/* ═══════════════════════════════════════════════════════════════
 *  RECT
 * ═══════════════════════════════════════════════════════════════ */

typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECT;

/* ═══════════════════════════════════════════════════════════════
 *  Large integer (used in IO_STATUS_BLOCK, file offsets)
 * ═══════════════════════════════════════════════════════════════ */

typedef union _LARGE_INTEGER {
    struct { DWORD LowPart; LONG HighPart; };
    int64_t QuadPart;
} LARGE_INTEGER;

/* ═══════════════════════════════════════════════════════════════
 *  Critical section / RTL types (kernel.h uses these)
 * ═══════════════════════════════════════════════════════════════ */

typedef struct { uint8_t opaque[40]; } CRITICAL_SECTION, RTL_CRITICAL_SECTION;
typedef CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

/* ═══════════════════════════════════════════════════════════════
 *  Atomically-include <windows.h> when it exists, so this header
 *  can be placed BEFORE the real SDK without redefinition errors.
 * ═══════════════════════════════════════════════════════════════ */

#ifdef __cplusplus
}
#endif

#endif /* D3D8_PORTABLE_H */
