#include "functions.h"

/*
 * @brief Copies the 'src' string to the given 'dest' arr.
 * @param dest Array of chars that will receive the string 'src'.
 * @param src The source string that will be copied.
 * @return Returns a copy of the string.
 * */

char	*my_strcpy(char *dest, const char *src) {
	size_t i = 0, j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return dest;
}
