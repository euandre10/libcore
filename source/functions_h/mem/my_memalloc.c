#include "functions.h"

/*
 * @brief Allocates a new block of memory with all values equal zero.
 * @param num_elem Number of elements that will be used.
 * @param elem_size Size of the elements.
 * @return Returns the new memory block with all values equal zero. If error, returns NULL.
 * */

void	*my_memalloc(size_t num_elem, size_t elem_size) {
	size_t size = num_elem * elem_size; 
	Header *info = (Header *)malloc(sizeof(Header) + size);
	if (!info) return NULL;
	info->memalloc_size = size;
	void *memalloc_block = (void *)(info + 1);
	my_memset(memalloc_block, 0, size);
	return memalloc_block;
}
