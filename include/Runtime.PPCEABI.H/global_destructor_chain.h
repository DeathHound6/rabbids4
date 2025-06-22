#ifndef GLOBAL_DESTRUCTOR_CHAIN_H
#define GLOBAL_DESTRUCTOR_CHAIN_H
#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef void (*DtorFunction) (void* obj, s16 method);
typedef struct DtorLink {
    struct DtorLink* next;
    DtorFunction dtor;
    void* object;
} DtorLink;

DtorLink* __global_destructor_chain;
void* __register_global_object(void *object, DtorFunction destructor, DtorLink *regmem);
void __destroy_global_chain(void);

#ifdef __cplusplus
}
#endif
#endif
