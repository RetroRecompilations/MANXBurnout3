// shlobj.h — Cross-platform stub for kernel_path.c
// Provides SHGetFolderPathA which maps to XDG/AppData paths on Linux.
#ifndef BURNOUT3_SHELL_STUB_H
#define BURNOUT3_SHELL_STUB_H

#include "windows.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef CSIDL_LOCAL_APPDATA
#define CSIDL_LOCAL_APPDATA 0x001c
#endif
#ifndef SHGFP_TYPE_CURRENT
#define SHGFP_TYPE_CURRENT 0
#endif

HRESULT WINAPI SHGetFolderPathA(HWND hwnd, int csidl, HANDLE hToken,
                                 DWORD dwFlags, LPSTR pszPath);

#ifdef __cplusplus
}
#endif

#endif
