#include "functions.h"

/*
 * @brief Count how many words have in the string.
 * @param str String that will be used.
 * @return Return the number of words found.
 * */

size_t	my_strwrdc(const char *str) {
	size_t i = 0, in_word = 0, words = 0;
	while (str[i] != '\0') {
		if (str[i] == 32)
			in_word = 0;
		else if (!in_word) {
			in_word = 1;
			words++;
		}
	}
	return words;
}
