#include "functions.h"

/*
 * @brief Check if the given char is a ASCII character.
 * @param ch Any character.
 * @return Returns true (1) or false (0).
 * */

int	my_isascii(int ch) {
	return (ch >= 0 && ch <= 127) ? true : false;
}
