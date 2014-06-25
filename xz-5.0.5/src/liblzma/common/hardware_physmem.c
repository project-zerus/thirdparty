///////////////////////////////////////////////////////////////////////////////
//
/// \file       hardware_physmem.c
/// \brief      Get the total amount of physical memory (RAM)
//
//  Author:     Jonathan Nieder
//
//  This file has been put into the public domain.
//  You can do whatever you want with this file.
//
///////////////////////////////////////////////////////////////////////////////

#include "thirdparty/xz-5.0.5/src/liblzma/common/common.h"

#include "thirdparty/xz-5.0.5/src/common/tuklib_physmem.h"


extern LZMA_API(uint64_t)
lzma_physmem(void)
{
	// It is simpler to make lzma_physmem() a wrapper for
	// tuklib_physmem() than to hack appropriate symbol visiblity
	// support for the tuklib modules.
	return tuklib_physmem();
}
