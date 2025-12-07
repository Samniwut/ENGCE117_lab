#include <stdio.h>
void print_line();
 int main(){
    int Size = 6;
    int Date[Size];
    int total_sum = 0;
    int i ;

    for(i =0 ; i < Size ; i++){
       if(scanf("%d",&Date[i]) != 1){
        break;
       } 
    }
    print_line();
 for ( i = 0; i < Size; i++){
 printf(" %d" ,Date[i]);
 total_sum += Date[i];
 }
 printf("\nTotal Sum for Number : %d\n",total_sum);
    return 0; 

 }
 void print_line(){
 printf("-- SUMMATION REPORT -- \n");
 printf("Recorded Number : "); 
 }