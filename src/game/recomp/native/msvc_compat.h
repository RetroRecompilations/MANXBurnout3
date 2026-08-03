/* The recomp runtime was written for MSVC; these are the only dialect
 * differences that stop it compiling with gcc/clang. */
#ifndef MSVC_COMPAT_H
#define MSVC_COMPAT_H
#ifndef _MSC_VER
#  define __forceinline inline __attribute__((always_inline))
#  define __declspec(x)
#  define __fastcall
#  define __stdcall
#  define __cdecl
#  define __debugbreak() __builtin_trap()
#endif
#endif
