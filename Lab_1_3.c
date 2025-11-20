#include <stdio.h>
int print_result(int result);
int main() {
    int num1, num2, operationCode, result;
     if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3) {
        printf("Invalid Operation");
        return 1;} // Handle input failure

    switch(operationCode){
        case 1:
        result=num1+num2;
        print_result(result);
        break;
        case 2:
          result=num1-num2;
          print_result(result);
        break;
        case 3:
          result=num1*num2;
          print_result(result);
        break;
        case 4:
          result=num1/num2;
          print_result(result);
        break;
        default:
          printf("Invalid Operation");
          return 0;
    }
    return 0;
}
int print_result(int result){
    printf("%d",result);
}

