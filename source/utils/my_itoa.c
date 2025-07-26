#include "functions.h"

/*
 * @brief Changes integer to ascii.
 * @param number Number to be changed.
 * @param str Array of chars that will receive the changes.
 * @param base Base number used to convert.
 * @return Returns a pointer to the string.
 * */

char	*my_itoa(int number, char *str, int base) {
	size_t i = 0, is_negative = 0;
	if (number == 0) {
		str[i++] = '0';
		str[i] = '\0';
		return str;
	}

	if (number < 0) {
		is_negative = 1;
		number = -number;
	}

	while (number > 0) {
		if (base == 10) {
			int digit = number % 10;
			str[i++] = digit + '0';
			number /= 10;
		} else if (base == 2) {
			int digit = number % 2;
			str[i++] = digit + '0';
			number /= 2;
		}
	}

	if (is_negative) str[i++] = '-';
	str[i] = '\0';
	my_strrev(str);
	return str;
}
