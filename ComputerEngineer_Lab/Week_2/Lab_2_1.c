#include<stdio.h>
#include <string.h>


void reverse(char str1[],char str2[]);

int main(){
    char text[50] = "I love You";
    char out[50];
  reverse(text,out);

    return 0;
}
void reverse(char str1[],char str2[]){
    int length = strlen(str1);
    int i, j ;

    for(int i = 0 , j = length -1 ;i < length; i++,j--){
        str2[i]=str1[j];
    }
     str2[length] = '\0';
     printf("%s\n",str2);
}
