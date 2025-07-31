#include "functions.h"

/*
 * @brief Count how many of the given 'ch' is on the string.
 * @param str The string that will be searched.
 * @param ch The character that will be counted in the string.
 * @return Returns the number of times that 'ch' appears in the 'str'.
 * */

size_t	my_chrcount(char *str, int ch) {
	size_t chr_count = 0;
	for (size_t i = 0; str[i] != '\0'; i++) {
		if (str[i] == ch)
			chr_count++;
	}
	return chr_count;
}
