#include <stdio.h>
void print_line();
 int main(){
    int Count = 5;
    int Numbers[Count];
    int even_count = 0 ,odd_count = 0;
    int i ;

    for(i =0 ; i < Count ; i++){
       if(scanf("%d",&Numbers[i]) != 1){
        break;
       }
       (Numbers[i] % 2 == 0)?even_count++ :odd_count++ ;
    }
    print_line();
 for ( i = 0; i < Count; i++){
 printf(" %d" ,Numbers[i]);
 }
 printf("\nTotal Even NUmber : %d\n",even_count);
 printf("Total Odd NUmber : %d\n",odd_count);

    return 0; 

 }
 void print_line(){
 printf("-- NUMBER CLASSIFICATION REPORT -- \n");
 printf("Recorded Number : "); 
 }