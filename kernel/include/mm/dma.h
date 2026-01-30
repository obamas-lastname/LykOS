#include "mm/pm.h"

uintptr_t dma_map(size_t size);
void dma_unmap(uintptr_t virt, size_t size);
