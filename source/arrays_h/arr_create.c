#include "arrays.h"

/*
 * @brief Verify the datatype for the array and creates a new one.
 * @param datatype Using the specified ENUM in the arrays.h, it points the type of the data that will be used in the new array created.
 * @param arrSize The total size in the beginning of the array.
 * @return Returns a new allocated struct with all the values setted.
 * */

Array *arr_create(arrType datatype, size_t arrSize) {
	Array *new_struct = (Array *)malloc(sizeof(Array));
	if (!new_struct) return NULL;
	switch (datatype) {
		case INT:
			new_struct->arr = (int *)malloc(sizeof(int) * arrSize); break;
		case FLOAT:
			new_struct->arr = (float *)malloc(sizeof(float) * arrSize); break;
		case DOUBLE:
			new_struct->arr = (double *)malloc(sizeof(double) * arrSize); break;
		case CHAR:
			new_struct->arr = (char *)malloc(sizeof(char) * arrSize); break;
		case STRING:
			new_struct->arr = (char **)malloc(sizeof(char *) * arrSize); break;
		default:
			free(new_struct); return NULL;
	}
	if (!new_struct->arr) {
		free(new_struct);
		return NULL;
	}
	new_struct->type = datatype;
	new_struct->capacity = arrSize;
	new_struct->num_elem = 0;
	return new_struct;
}
