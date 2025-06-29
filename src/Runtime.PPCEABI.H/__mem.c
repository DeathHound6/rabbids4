#include "msl_c.ppceabi.bare.h/PowerPC_EABI_Support/MSL/MSL_C//stddef.h"
#include "global.h"
size_t strlen(const char *str)
{
    size_t len = -1;
    u8 *p = (u8 *)(str - 1);

    while (len++, *p++);
    return len;
}
