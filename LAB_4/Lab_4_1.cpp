#include <stdio.h>
 void Getinput(int N);
int main(){ 
    int N;
    if(scanf("%d",&N) != 1){
        return 1;
    }
    Getinput(N);
    return 0;
}
void Getinput(int N){
    int score[N],i;
for ( i = 0; i < N; i++)
    {
        if(scanf("%d",&score[i]) != 1){
            break;
        }
    }
    for (i = N - 1 ; i >= 0; i--){
        printf("%d\n",score[i]);
    }
}