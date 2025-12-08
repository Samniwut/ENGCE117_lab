#include <stdio.h>

void print_line(int search_value , int count);

 int main(){

    int MAX_SIZE = 10 ,N;
    int date[MAX_SIZE];
    int search_value ,count = 0 ,i;
    
    printf("Enter the number  of elements (N, max = %d):",MAX_SIZE);
    if(scanf("%d",&N) != 1){
        return 1;
    }

    if(N > MAX_SIZE || N < 1){
        N = MAX_SIZE ; 
    }
    printf("Enter %d integer number: \n",N);
    for(i = 0 ; i < N ; i++){
       if(scanf("%d",&date[i]) != 1){
        break;
       } 
    }
  printf("Enter the Search Value :");
  scanf("%d",&search_value);
   
  for (i = 0; i < N; i++)
  {
    if(search_value == date[i]){
        count++;
    }
  }
  

  printf("--FREQUENCY ANALYSIS REPORT--\n");
  printf("Recorded Number: ");
   for ( i = 0; i < N; i++){
     printf(" %d" ,date[i]);
    }
    print_line(search_value,count);
    return 0; 

 }
 void print_line(int search_value , int count){
    printf("\nSerch Value : %d\n",search_value);
    printf("Frequency Count : %d\n",count);
 }