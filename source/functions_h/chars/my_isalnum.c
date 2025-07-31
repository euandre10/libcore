#include "functions.h"

/*
 * @brief Check if the given ch is alpha/numeric.
 * @param ch Any char from the ASCII table.
 * @return Returns true (1) or false (0);
 * */

int	my_isalnum(int ch) {
	if (ch >= '0' && ch <= '9') return true;
	if (ch >= 'A' && ch <= 'Z') return true;
	if (ch >= 'a' && ch <= 'z') return true;
	return false;
}
