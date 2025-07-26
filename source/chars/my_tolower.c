#include "functions.h"

/*
 * @brief Change the character to lowercase.
 * @param ch Any character from ascii table.
 * @return Returns the character in lowercase or 'ch' again.
 * */

int	my_tolower(int ch) {
	return (ch >= 'a' && ch <= 'z') ? ch + 32 : ch;
}
