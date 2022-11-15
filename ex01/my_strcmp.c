#include <string.h>
int my_strcmp(char* str1, char* str2)
{
    int firstString = 0;
    int secondString = 0;
    if(strlen(str1)>strlen(str2)){
        return -1;
    }else if (strlen(str1)==strlen(str2)) {
        return 0;
    }else{
        return 1;
    }
    // for (int i =0 ; i < strlen(str1); i++) {
    //     firstString += str1[i];
    //     printf("frist %d\n", firstString);
    //     secondString += str2[i];
    //     printf("second %d\n", secondString);
    // }
    // if(firstString>secondString){
    //     return -1;
    // }else if (firstString==secondString) {
    //     return 0;
    // }else{
    //     return 1;
    // }
}