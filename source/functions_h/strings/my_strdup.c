#include "functions.h"

/*
 * @brief Duplicates a string in a new block of memory.
 * @param str The string that will be duplicated.
 * @return Returns a pointer to the new block of memory with the string.
 * @warning Needs to use free() after to dealloc the memory.
 * */

char	*my_strdup(const char *str) {
	size_t str_len = my_strlen(str);
	char *new_string = (char *)my_memalloc(str_len + 1, sizeof(char));
	size_t i = 0, j = 0;
	while (str[i] != '\0')
		new_string[j++] = str[i++];
	new_string[j] = '\0';
	return new_string;
}
