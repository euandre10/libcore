#include <stdlib.h>

/* === TYPEDEFS AND STRUCTS === */
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

/* === ARRAY FUNCTIONS === */
Array	*arr_create(arrType datatype, size_t arrSize);
void	arr_free(Array *arr);
void    arr_push(Array *arr, void *value);
