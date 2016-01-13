#ifndef __FASTMM__
#define __FASTMM__

#ifdef __cplusplus
	extern "C" {
#endif

__declspec(dllimport) void* __cdecl FastMM_GetMem(int size);
__declspec(dllimport) void* __cdecl FastMM_ReGetMem(void* p, int size);
__declspec(dllimport) void* __cdecl FastMM_FreeMem(void* p);

#ifdef __cplusplus
	}
#endif

#endif
