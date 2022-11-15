#include <string.h>
char* my_strcpy(char* str1, char* str2)
{
    for(int i = 0; i < strlen(str2); i++){
        str1[i] = str2[i];
    }
    return str2;
}