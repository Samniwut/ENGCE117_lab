// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1, num2, operationCode, result;
    //scanf("%d %d %d",&num1,&num2,&operationCode);
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&operationCode);
    if(operationCode >= 5){
        printf("Invalid Operation");
        return 0;
    }
    switch(operationCode){
        case 1:
        result=num1+num2;
        break;
        case 2:
          result=num1-num2;
        break;
        case 3:
          result=num1*num2;
        break;
        case 4:
          result=num1/num2;
        break;
    }
    printf("%d",result);
    return 0;
}