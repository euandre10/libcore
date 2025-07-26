#include "functions.h"

/*
 * @brief Checks if the given char is alpha.
 * @param Any character from ascii table.
 * @return Returns true (1) if it is, false (0) if it is not.
 * */

int	my_isalpha(int ch) {
	if (ch >= 'A' && ch <= 'Z') return true;
	if (ch >= 'a' && ch <= 'z') return true;
	return false;
}
