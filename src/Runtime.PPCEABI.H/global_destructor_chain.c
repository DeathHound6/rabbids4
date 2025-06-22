#include "Runtime.PPCEABI.H/global_destructor_chain.h"
#include "Runtime.PPCEABI.H/__init_cpp_exceptions.h"

DtorLink* __global_destructor_chain;


void* __register_global_object(void *object, DtorFunction destructor, DtorLink *link)
{
    link->next = __global_destructor_chain;
    link->dtor = destructor;
    link->object = object;
    __global_destructor_chain = link;
    return object;
}

void __destroy_global_chain(void) {
    DtorLink* link;

    while (link = __global_destructor_chain) {
        __global_destructor_chain = link->next;
        link->dtor(link->object, -1);
    }
}
