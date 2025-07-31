#include "functions.h"

/*
 * @brief Concatenate two strings in a new allocated memory block.
 * @param str1 The first string to concatenate.
 * @param str2 The second string to concatenate.
 * @return Returns a pointer to the new memory block with the concatenated strings.
 * @warning Needs to use free() after to avoid memory leaks.
 * */

char	*my_strjoin(const char *str1, const char *str2) {
	if (!str1 || !str2) return NULL;
	size_t str1_len = my_strlen(str1);
	size_t str2_len = my_strlen(str2);
	size_t total_len = str1_len + str2_len;
	char *new_concatstr = (char *)my_memalloc(total_len + 1, 1);
	my_strcat(new_concatstr, str1);
	my_strcat(new_concatstr, str2);
	new_concatstr[total_len] = '\0';
	return new_concatstr;
}
