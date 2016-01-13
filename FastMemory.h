#ifndef __FASTMEMORY__
#define __FASTMEMORY__

#if defined(USE_FASTMM_ST) || defined(USE_FASTMM_MT)
	#include "FastMM.h"

	#ifdef USE_FASTMM_MT
		#pragma comment(lib, "FastMM4VC_MT.lib")
	#else
		#pragma comment(lib, "FastMM4VC_ST.lib")
	#endif

	inline void* operator new(size_t size)
	{
		return FastMM_GetMem((int)size);
	}

	inline void* operator new[] (size_t size)
	{
		return FastMM_GetMem((int)size);
	}

	inline void operator delete(void* p)
	{
		FastMM_FreeMem(p);
	}

	inline void operator delete [] (void* p)
	{
		FastMM_FreeMem(p);
	}

	inline void* MemAlloc(int size)
	{
		return FastMM_GetMem(size);
	}

	inline void* MemReAlloc(void* p, int size)
	{
		return FastMM_ReGetMem(p, size);
	}

	inline void MemFree(void* p)
	{
		FastMM_FreeMem(p);
	}
#else
	#include <stdlib.h>

	inline void* MemAlloc(int size)
	{
		return malloc(size);
	}

	inline void* MemReAlloc(void* p, int size)
	{
		return realloc(p, size);
	}

	inline void MemFree(void* p)
	{
		free(p);
	}
#endif

#endif
