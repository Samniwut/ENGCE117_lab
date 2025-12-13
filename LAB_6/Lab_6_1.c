#include <stdio.h>
void increase_value(int *numder_ptr);
int main (){
    int date;

    printf("Enter initial integer value:");
    scanf("%d",&date);
    printf("\n--- POINTER MODIFICATION REPORT ---\n");
    printf("1. Value BEFORE function call : %d\n",date);
   increase_value(&date);
    printf("2. Value AFTER function call : %d\n",date);
    return 0;
}
void increase_value(int *numder_ptr){
    *numder_ptr += 10 ;
}