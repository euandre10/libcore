#include "functions.h"

/*
 * @brief Compares two strings.
 * @param str1 First string.
 * @param str2 Second string.
 * @return Returns 0 if equal, positive if str1 > str2, negative if str1 < str2.
 * */

int	my_strcmp(const char *str1, const char *str2) {
	size_t i = 0, j = 0;
	while (str1[i] != '\0' && str2[j] != '\0') {
		if (str1[i] != str2[j]) {
			if (str1[i] > str2[j])
				return (str1[i] - str2[j]);
			else if (str1[i] < str2[j])
				return (str1[i] - str2[j]);
		}
		i++; j++;
	}
	return 0;
}

