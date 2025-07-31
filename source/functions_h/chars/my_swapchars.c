#include "functions.h"

/*
 * @brief Change every searched char found in the string.
 * @param str The string that will be searched the char.
 * @param search The char that will be searched/changed.
 * @param swap The char that will be placed.
 * @return Returns the modified string.
 * */

char	*my_swapchars(char *str, int search, int swap) {
	for (size_t i = 0; str[i] != '\0'; i++) {
		if (str[i] == search)
			str[i] = swap;
	}
	return str;
}
