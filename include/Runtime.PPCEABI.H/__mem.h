#ifndef RUNTIME_MEM_H
#define RUNTIME_MEM_H
#include "msl_c.ppceabi.bare.h/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/size_t.h"
#ifdef __cplusplus
extern "C" {
#endif

__declspec(section ".init") void* strlen(const char *str);

#ifdef __cplusplus
}
#endif

#endif /* RUNTIME_MEM_H */
