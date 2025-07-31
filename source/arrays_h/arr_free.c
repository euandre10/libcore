#include "arrays.h"

/*
 * @brief Free all memory allocated for the array, according to it's type.
 * @param arr Struct that contains the array and its infos.
 * */

void	arr_free(Array *arr) {
	if (arr->type == STRING) {
		for (size_t i = 0; i < arr->capacity; i++)
			free(((char **)arr->arr)[i]);
	}
	free(arr->arr);
	free(arr);
}
