#include "functions.h"

/*
 * @brief Search for the first occurrence of the given char.
 * @param str String that will be searched.
 * @param ch Character that will be searched in the string.
 * @return Returns a pointer to the memory address if found, NULL if not found.
 * */

char	*my_strchr(char *str, int ch) {
	for (size_t i = 0; str[i] != '\0'; i++) {
		if (str[i] == ch)
			return (str + i);
	}
	return NULL;
}
