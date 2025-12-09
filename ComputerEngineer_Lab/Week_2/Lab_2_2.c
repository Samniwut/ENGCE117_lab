#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char str1[]);

int main(){
    char text[50] = "I love You";
    char *out;
    out = reverse(text);
    printf("%s\n",out);

    return 0;
}
char *reverse(char str1[]){
    int length = strlen(str1);
    int i, j ;
    char *str2 = (char *)malloc(length + 1);
    for(int i = 0 , j = length -1 ;i < length; i++,j--){
        str2[i]=str1[j];
    }
     str2[length] = '\0';
     return str2;
}
