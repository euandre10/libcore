#include "functions.h"

/*
 * @brief Copies the selected block of memory.
 * @param dest The new block of memory.
 * @param src Block of memory that will be copied.
 * @param size How many bites does the function will copy.
 * @return Returns the new block of memory.
 * @warning The param 'size' requires the size in BYTES.
 * */

void	*my_memcpy(void *dest, const void *src, size_t size) {
	unsigned char *pointer = (unsigned char *)dest;
	const unsigned char *source = (const unsigned char *)src;
	for (size_t i = 0; i < size; i++) {
		*(pointer + i) = *(source + i);
	}
	return dest;
}
