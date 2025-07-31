#include "functions.h"

/*
 * @brief Search for the last occurrence of the given char.
 * @param str String that will be searched.
 * @param ch Char that will be searched in the str.
 * @return Returns a pointer to the memory address of the last occurrence or returns NULL if doesn't found.
 * */

char	*my_strrchr(char *str, int ch) {
	size_t i = 0;
	char *temp = str;
	for (; str[i] != '\0'; i++) {
		if (str[i] == ch)
			temp = (str + i);
	}
	return (i != 0) ? temp : NULL;
}
