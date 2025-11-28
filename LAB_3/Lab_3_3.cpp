#include <stdio.h>

float avgcalcollection(float total, int N);

struct Student{
    char name[50];
    int StudentId;
    float score;
};

int main(){

  int N,i ; 
  float total=0.0, avg = 0.0; 

if(scanf("%d", &N) != 1 || N <= 0){
    printf("Average Score: %.2f\n", avg);
    return 1;   }

struct Student students[N];
for (i = 0; i < N; i++){
    if(scanf("%d %f %s", &students[i].StudentId, &students[i].score ,&students[i].name) != 3){
        return 1;}
}
for ( i = 0; i < N; i++)
{
    total += students[i].score;
}
    avg = avgcalcollection(total, N);

     printf("Average Score: %.2f\n", avg);
    return 0;
}

float avgcalcollection(float total, int N){
    float avg;
    avg = total / N;
    return avg;
}
