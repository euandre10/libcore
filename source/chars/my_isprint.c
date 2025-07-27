#include "functions.h"

/*
 * @brief Check if the given ch is a printable character.
 * @param ch Any char from ASCII table.
 * @return Returns true (1) or false (0).
 * */

int	my_isprint(int ch) {
	return (ch >= 32 && ch <= 127) ? true : false;
}
