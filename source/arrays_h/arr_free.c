#include "arrays.h"

void	arr_free(Array *arr) {
	if (arr->type == STRING) {
		for (size_t i = 0; i < arr->capacity; i++)
			free(((char **)arr->arr)[i]);
	}
	free(arr->arr);
	free(arr);
}
