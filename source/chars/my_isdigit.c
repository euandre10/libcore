#include "functions.h"

/*
 * @brief Checks if the 'ch' is a digit.
 * @param ch Any character from the ascii table.
 * @return Returns true (1) if it is, false (0) if it's not.
 * */

int	my_isdigit(int ch) {
	return (ch >= '0' && ch <= '9') ? true : false;
}
