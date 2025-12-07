#include <stdio.h>
void PrintLine(int countUpper,int countLower,int countDigit, int countOther);
int main(){
   char text[101];
   int countUpper = 0,countLower = 0 , countDigit = 0 ,countOther = 0;

   if (scanf("%s",&text) != 1){
    return 1;
   }
   for (int i = 0; text[i] != '\0'; i++){
    if(text[i] >= 'A' && text[i]<= 'Z'){
        countUpper++;
    }else if(text[i] >= 'a' && text[i]<= 'z'){
        countLower++;
    }else if(text[i] >= '0' && text[i]<= '9'){
        countDigit++;
    }else{
        countOther++;
    }
   }
   PrintLine(countUpper,countLower,countDigit,countOther);
    return 0;
}
void PrintLine(int countUpper,int countLower,int countDigit, int countOther){
    printf("Uppercase : %d\n",countUpper);
    printf("Lowercase : %d\n",countLower);
    printf("Digits : %d\n",countDigit);
    printf("Special/Other : %d\n",countOther);
}