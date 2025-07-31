#include "functions.h"

/*
 * @brief Prints the string in the stdout. 
 * @param str String that will be printed out.
 * @warning This function uses '\n' (new line).
 * */

void	my_println(const char *str) {
	size_t str_len = my_strlen(str);
	char new_line = 10;
	for (size_t i = 0; i < str_len; i++)
		write(1, (str + i), 1);
	write(1, &new_line, 1);
}
