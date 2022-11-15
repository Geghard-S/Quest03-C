#include <string.h>
char* my_strncpy(char* str1, char* str2, int length)
{
    for(int i = 0; i < length; i++){
        str1[i] = str2[i];
    }
    return str2;
}