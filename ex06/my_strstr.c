#include <string.h>
#include <stdio.h>
char* my_strstr(char* str1, char* str2)
{
    int index, i = 0, j = 0, count = 0;
    char* str3[strlen(str1)];
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    while (i < length1) {
        if (str1[i] == str2[j]){
            index = i;
            while (str1[i] == str2[j] && j < length2) {
                i++;
                j++;
            }
            if (j != length2){
                j = 0;
                i = index + 1;
            } 
        } else {
            i++;
            count++;
        }
    }
    i = 0;
    while (i < length1 - index){
        str3[i] = &str1[index];
        index++;
        i++;
    }
    //printf("fdfd %i,%i,%s\n",length1,index,*str3);
    if (strlen(str1)<strlen(str2)){
        return NULL;
    }else if (count > length1) {
        return NULL;
    }else if (length2 == 0 && length1 > 0) {
        return str1;
    }
    else{
        return *str3;
    }
}