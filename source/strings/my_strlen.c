#include "functions.h"

/*
 * @brief Count the size of the string.
 * @param str String that will be counted the size.
 * @return Returns the size of the string.
 * */

size_t	my_strlen(const char *str) {
	size_t str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return str_len;
}
