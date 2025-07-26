#include "functions.h"

/*
 * @brief Prints the string in the stdout.
 * @param str String that will be printed.
 * @warning This functions doesn't use '\n' (new line).
 * */

void	my_print(const char *str) {
	size_t str_len = my_strlen(str);
	for (size_t i = 0; i < str_len; i++)
		write(1, (str + i), 1);
}
