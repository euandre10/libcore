#include "functions.h"

/*
 * @brief Concatenate two strings.
 * @param dest The first string, the one that will receive the concat.
 * @param src The second string, that will be concatenated.
 * @return Returns a pointer to the memory address of 'dest'.
 * */

char	*my_strcat(char *dest, const char *src) {
	size_t dest_len = my_strlen(dest);
	size_t i = 0;
	while (src[i] != '\0')
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return dest;
}
