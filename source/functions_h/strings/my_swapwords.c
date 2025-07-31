#include "functions.h"

char	*my_swapwords(char *str, const char *word, const char *newword) {
	if (!str || !word || !newword) return NULL;
	size_t newword_len = my_strlen(newword);
	size_t i = 0, j = 0;
	char *get_word = my_strstr(str, word);
	for (; i < newword_len; i++)
		get_word[i] = newword[j++];
	if (i == newword_len && get_word[i+1] != 32) get_word[i] = 32;
	char *newstr = my_strdup(str);
	return newstr;
}
