#include <stdio.h>

 int failCount = 0 ,passSum = 0;
 void Getinput(int N);
 void print_line();

int main(){ 
    int N;
    if(scanf("%d",&N) != 1){
        return 1;
    }
    Getinput(N);
    print_line();
    return 0;
}

void Getinput(int N){
    int score[N],i;
for ( i = 0; i < N; i++)
    {
        if(scanf("%d",&score[i]) != 1){
            break;
        }
    if(score[i] < 50){
       failCount++;
    }else if(score[i] >= 50 && score[i] <= 100 ){
      passSum += score[i];
    }
    }
}
void print_line(){
    printf("Passing Score Sum : %d\n",passSum);
    printf("Failing Students Count : %d\n",failCount);
}