/* burnout3_kernel_compat.h — remaining Windows items the DXVK native
 * headers don't cover.  Included via -include for kernel layer.
 * Runs before windows.h, so include standard C headers for types. */
#include <stddef.h>
#include <wchar.h>

#ifndef ERROR_INVALID_HANDLE
#define ERROR_INVALID_HANDLE         6L
#endif
#ifndef ERROR_GEN_FAILURE
#define ERROR_GEN_FAILURE            31L
#endif
#ifndef ERROR_CALL_NOT_IMPLEMENTED
#define ERROR_CALL_NOT_IMPLEMENTED   120L
#endif

int swprintf_s(wchar_t *s, size_t n, const wchar_t *fmt, ...);

/* FILE_NAME_INFO — missing from DXVK winbase.h */
#ifndef _FILE_NAME_INFO_DEFINED
typedef struct _FILE_NAME_INFO {
    DWORD FileNameLength;
    WCHAR FileName[1];
} FILE_NAME_INFO, *PFILE_NAME_INFO;
#define _FILE_NAME_INFO_DEFINED
#endif
#define FileNameInfo 2

/* File/disk functions missing from DXVK native headers */
BOOL GetDiskFreeSpaceExW(LPCWSTR lpDirectoryName,
    PULARGE_INTEGER lpFreeBytesAvailableToCaller,
    PULARGE_INTEGER lpTotalNumberOfBytes,
    PULARGE_INTEGER lpTotalNumberOfFreeBytes);
BOOL GetFileInformationByHandleEx(HANDLE hFile, int FileInformationClass,
    LPVOID lpFileInformation, DWORD dwBufferSize);

/* Thread priority constants */
#ifndef THREAD_PRIORITY_IDLE
#define THREAD_PRIORITY_IDLE        (-15)
#endif
#ifndef THREAD_PRIORITY_LOWEST
#define THREAD_PRIORITY_LOWEST      (-2)
#endif
#ifndef THREAD_PRIORITY_BELOW_NORMAL
#define THREAD_PRIORITY_BELOW_NORMAL (-1)
#endif

/* More missing from kernel_sync */
HANDLE CreateTimerQueue(void);
BOOL CreateTimerQueueTimer(PHANDLE phNewTimer, HANDLE TimerQueue,
    void* Callback, PVOID Parameter, DWORD DueTime, DWORD Period, ULONG Flags);
BOOL DeleteTimerQueueTimer(HANDLE TimerQueue, HANDLE Timer, HANDLE CompletionEvent);
BOOL DeleteTimerQueueEx(HANDLE TimerQueue, HANDLE CompletionEvent);

/* kernel_pool */
SIZE_T HeapSize(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem);
