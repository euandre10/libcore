#include <stdlib.h>

typedef enum {
		INT,
		FLOAT,
		DOUBLE,
		CHAR,
		STRING
} arrType;


typedef struct {
		void *arr;
		arrType type;
		size_t capacity, num_elem;
} Array;

Array	*arr_create(arrType datatype, size_t arrSize);
void	arr_free(Array *arr);
