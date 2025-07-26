#include "functions.h"

/*
 * @brief Reverses a string.
 * @param str String that will be reversed.
 * @return Returns the same string, reversed.
 * @warning It doesn't create a new string. It reverses THE SAME string in the function's params.
 * */

char	*my_strrev(char *str) {
	size_t str_len = my_strlen(str);
	char *pointer1 = str;
	char *pointer2 = (str + str_len) - 1;
	while (pointer1 < pointer2) {
		char temp = *(pointer1);
		*(pointer1) = *(pointer2);
		*(pointer2) = temp;
		pointer1++;
		pointer2--;
	}
	return str;
}
