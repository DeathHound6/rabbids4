#ifndef GLOBAL_H
#define GLOBAL_H

#include "types.h"

#ifndef __INTELLISENSE__
    #define ALIGN_DECL(ALIGNMENT) __attribute__((aligned(ALIGNMENT)))
    #define SECTION_DATA __declspec(section ".data")
    #define SECTION_INIT __declspec(section ".init")
#else
    #define STATIC_ASSERT(...)
    #define ALIGN_DECL(...)
    #define SECTION_DATA
    #define SECTION_INIT
#endif

#endif
