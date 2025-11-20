#include <stdio.h>

int main() {
    int num1, num2, operationCode, result;
     if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3) {
        printf("Invalid Operation");
        return 0;} // Handle input failure
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
