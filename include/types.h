/* somewhat borrowed from https://github.com/ThePlayerRolo/LegoCloneWarsWii/blob/main/include/types.h */
#include "msl_c.ppceabi.bare.h/PowerPC_EABI_Support/MSL/MSL_C/stddef.h"

#ifndef TYPES_H
typedef int BOOL;

#define TYPES_H
typedef int BOOL;
typedef signed char s8;
typedef signed short s16;
typedef signed long int s32;

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int uint;
typedef unsigned long int u32;
typedef unsigned long long int u64;


typedef volatile unsigned char vu8;
typedef volatile unsigned short vu16;
typedef volatile unsigned long int vu32;
typedef volatile unsigned long long int vu64;

typedef volatile signed char vs8;
typedef volatile signed short vs16;
typedef volatile signed long int vs32;
typedef volatile signed long long int vs64;


typedef float f32;
typedef double f64;
typedef volatile float vf32;
typedef volatile double vf64;


#ifdef NULL
#undef NULL
#endif
#define NULL 0

#ifdef TRUE
#undef TRUE
#endif
#define TRUE 1

#ifdef FALSE
#undef FALSE
#endif
#define FALSE 0
#endif //TYPES_H
