#include "functions.h"

/*
 * @brief Checks if the 'ch' is a space.
 * @param ch Any character from the ascii table.
 * @return Returns true (1) if it is, false (0) if its not.
 * */

int	my_isspace(int ch) {
	return (ch == 32) ? true : false;
}
