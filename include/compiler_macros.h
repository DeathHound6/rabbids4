/* Borrowed from https://github.com/ThePlayerRolo/LegoCloneWarsWii/blob/main/include/compiler_macros.h*/
#ifndef COMPILER_MACROS_H
    #define COMPILER_MACROS_H

    #ifndef __MWERKS__
        #define __option(x)
        #define __declspec(x)
        #define __attribute__(x)
        #define ASM_DECL asm
        #define ASM_BLOCK asm
    #else
        #define ASM_DECL
        #define ASM_BLOCK(...)
    #endif

    #define ALIGN(x) __attribute__((aligned(x)))
    #define DONT_INLINE __declspec(noinline) // use for regular functions
    #define DONT_INLINE_CLASS __attribute__((never_inline)) // use for class methods

    #define DECL_SECTION(x) __declspec(section x)
    #define DECL_WEAK __declspec(weak)

#endif
