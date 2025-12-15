#include <stdio.h>
int result_sum;
int result_product;
void calculate_sum_product(int num1 , int num2 ,int *val_A ,int *val_B);

int main(){
   int val_A,val_B;
   

   printf("Enter fist integer (Val A) :");
   scanf("%d",&val_A);
   printf("Enter fist integer (Val B) :");
   scanf("%d",&val_B);

   calculate_sum_product(val_A,val_B,&val_A,&val_B);

   printf("Result Sum (A+B) :%d\n",result_sum);
   printf("Result Product (A*B) :%d\n",result_product);
    return 0;
}
void calculate_sum_product(int num1 , int num2 ,int *val_A ,int *val_B){
  result_sum = num1 + num2;
  result_product = *val_A * *val_B;
}