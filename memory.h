#ifndef JAIL_MEMORY_H
#define JAIL_MEMORY_H

#include <sys/types.h>
#include <stdint.h>

bool safemem_init();

bool safemem_map_unwritable();

void* safemem_read_pid(pid_t pid, intptr_t remote_addr, size_t len);

void* safemem_read_pid_to_null(pid_t pid, intptr_t remote_addr);

intptr_t safemem_remote_addr(pid_t pid, void* local_ptr);

void safemem_reset();

#endif // JAIL_MEMORY_H