#include <stdio.h>  
#include <string.h>  
char* reverse_string(char* str)
{
    int i = 0;
    int j = strlen (str)-1;
    char temp[strlen (str)+1];
    int space = 32;
    if(str[0]=='\0'){
            return str;
        }
    while (i<strlen (str)){
        if(str[i]==' '){
            str[i]= space;
        }
        temp[i] = str[j]; 
        i++;
        j--;
    }
    str = temp;
    return str;   
}