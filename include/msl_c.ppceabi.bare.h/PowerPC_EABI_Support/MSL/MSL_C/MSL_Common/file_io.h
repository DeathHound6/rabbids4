#ifndef _MSL_FILE_IO_H
    #define _MSL_FILE_IO_H

    #include "msl_c.ppceabi.bare.h/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/file_def.h"
    #include "msl_c.ppceabi.bare.h/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/restrict_def.h"

    #ifdef __cplusplus
        extern "C" {
    #endif

    FILE* fopen(const char *RESTRICT filename, const char *RESTRICT mode);
    FILE* freopen(const char *RESTRICT filename, const char *RESTRICT mode, FILE *RESTRICT stream);
    int fclose(FILE *file);

    size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
    size_t fwrite(const void *RESTRICT buffer, size_t size, size_t count, FILE *RESTRICT stream);
    int fflush(FILE *file);

    #ifdef __cplusplus
        }
    #endif

#endif
