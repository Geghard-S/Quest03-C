#include <string.h>
#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif
void my_first_struct(integer_array* param_1)
{
    int length = param_1->size;
    printf("%d\n",length);
    for (int i = 0; i < length; i++) {
        printf("%d\n",param_1->array[i]);
    }

}