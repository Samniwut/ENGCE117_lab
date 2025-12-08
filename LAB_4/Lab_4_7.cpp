#include <stdio.h>
void print_line();
 int main(){

    int MAX_SIZE ,N;
    int date[MAX_SIZE];
    int search_value ,count = 0 ,i;
    
    printf("Enter the number  of elements ")

    for(i = 0 ; i < STUDENTS ; i++){
       if(scanf("%d",&scores[i]) != 1){
        break;
       } 
       sum += scores[i];
    }
    Average = (float)sum/STUDENTS;

    print_line();

   for ( i = 0; i < STUDENTS; i++){
     printf(" %d" ,scores[i]);
     if(scores[i] >= Average){above_average_count++;}
 }
 
 printf("\nTotal Sum : %d\n",sum);
 printf("Average Score : %.2f\n",Average);
 printf("Number of Score Above Average : %d\n",above_average_count);

    return 0; 

 }
 void print_line(){
 printf("Recorded Score : "); 
 }