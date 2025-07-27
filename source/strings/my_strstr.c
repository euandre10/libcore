#include "functions.h"

/*
 * @brief Search for a substring inside the given string.
 * @param str The string that will be searched.
 * @param substr The substring that the function searches for.
 * @return Returns a pointer to the memory address where the substr was found, and returns NULL if not found.
 * */

char	*my_strstr(char *str, const char *substr) {
	size_t i = 0, j = 0;
	size_t substr_len = my_strlen(substr);
	for (; str[i] != '\0'; i++) {
		j = 0;
		if (str[i] == substr[j]) {
			for (j = j + 1; substr[j] != '\0'; j++)
				if (str[i + j] != substr[j]) break;
			if (j == substr_len) return (str + i);
		}
	}
	return NULL;
}
