#include <stdbool.h>
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

bool my_is_sort(integer_array* param_1)
{
    int length = param_1->size;
    int newArr[length], i;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for (i = 0; i < length; i++) {
        if(param_1->array[i] < param_1->array[i+1]){
            newArr[i] = 1;
        }else if (param_1->array[i] > param_1->array[i+1]) {
            newArr[i] = -1;
        }else if (param_1->array[i] == param_1->array[i+1]) {
            newArr[i] = 0;
        }
    }
    for (i = 0; i < length; i++) {
        if(newArr[i] == 1){
            count1++;
        }else if(newArr[i] == 0){
            count2++;
        }else if (newArr[i] == -1) {
            count3++;
        }
    }
    if (count1 + count2 +1 == length){
       // printf("ghvhg %d", count1+count2);
        return true;
    }else if (count3 + count2 +1== length) {
        return true;
    }else if (length == 0) {
        return true;
    }else {
        //printf("ghvhg %d %d", count1,count2);
        return false;
    }
}