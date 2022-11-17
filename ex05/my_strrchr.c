#include <string.h>
#include <stdio.h>
char* my_strrchr(char* str1, char ch)
{
    char* str3[strlen(str1)];
    int count = 0;
    for (int i = strlen(str1) ; i > 0 ; i--) {
        if(str1[i] != ch){
            count++;
        }else if(str1[i] == ch){
            for (int j = 0 ; j < strlen(str1) ; j++) {
                str3[j] = &str1[i];
                i--;
            }
        }
    }
    if(count == strlen(str1)){
        return NULL;
    }else{
        return *str3;
    }
}