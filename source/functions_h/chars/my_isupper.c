#include "functions.h"

/*
 * @brief Checks if character is uppercase.
 * @param ch Any character from ascii table.
 * @return Returns true (1) if it is, false (0) if it is not.
 * */

int	my_isupper(int ch) {
	return (ch >= 'A' && ch <= 'Z') ? true : false;
}
