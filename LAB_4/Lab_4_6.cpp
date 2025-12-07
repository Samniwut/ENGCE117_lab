#include <stdio.h>
void print_line();
 int main(){

    const int STUDENTS = 5;
    int scores[STUDENTS];
    int sum = 0 , i;
    float Average = 0.0;
    int above_average_count = 0;
    

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