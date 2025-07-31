#include "functions.h"

/*
 * @brief Sets the value of memory.
 * @param dest The memory block that will have the value setted.
 * @param value The value to be used in the memory block.
 * @param bytes Number of bytes to set the value.
 * @return Returns the memory block with the value setted.
 * */

void	*my_memset(void *dest, int value, size_t bytes) {
	unsigned char *pointer = (unsigned char *)dest;
	for (size_t i = 0; i < bytes; i++)
		pointer[i] = (unsigned char)value;
	return (void*)dest;
}
