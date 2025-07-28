#include "functions.h"
#include <stdio.h>

int main(void) {
	char s[] = "Andre";
	for (size_t i = 1; i < 3; i++)
		my_swapchars(s, s[i], 0);
	printf("%s\n", s);
	return 0;
}
