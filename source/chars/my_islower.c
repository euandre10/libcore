#include "functions.h"

/*
 * @brief Checks if 'ch' is lowercase.
 * @param ch Any character from ascii table.
 * @returns Returns true (1) if it is, false (0) if it is not.
 * */

int	my_islower(int ch) {
	return (ch >= 'a' && ch <= 'z') ? true : false;
}
