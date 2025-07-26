#include "functions.h"

/*
 * @brief Turns the character to uppercase.
 * @param ch Any character from ascii table.
 * @return Returns the uppercase character or the given 'ch' unchanged.
 * */

int	my_toupper(int ch) {
	return (ch >= 'a' && ch <= 'z') ? (ch + 32) : ch;
}
