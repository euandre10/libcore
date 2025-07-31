#include "arrays.h"

void    arr_push(Array *arr, void *value) {
    if (arr->num_elem >= arr->capacity) {
        void *new_arr = NULL;
        size_t type_size = 0;
        switch (arr->type) {
            case INT: type_size = sizeof(int); break;
            case FLOAT: type_size = sizeof(float); break;
            case DOUBLE: type_size = sizeof(double); break;
            case CHAR: type_size = sizeof(char); break;
            case STRING: type_size = sizeof(char *); break;
            case default: 
        }
        new_arr = realloc(arr->arr, (arr->capacity * 2) * type_size);
        if (!new_arr) return;
        arr->arr = new_arr;
        arr->capacity *= 2;
    }

    switch (arr->type) {
        case INT:
            ((int *)arr->arr)[arr->num_elem++] = *(int *)value;
            break;
        case FLOAT:
            ((float *)arr->arr)[arr->num_elem++] = *(float *)value;
            break;
        case DOUBLE:
            ((double *)arr->arr)[arr->num_elem++] = *(double *)value;
            break;
        case CHAR:
            ((char *)arr->arr)[arr->num_elem++] = *(char *)value;
            break;
        case STRING:
            ((char **)arr->arr)[arr->num_elem++] = *(char **)value;
            break;
    }
}
