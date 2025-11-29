#include<stdio.h>

struct Transaction {
    char description[50];
    float amount;
};
int main(){
    int N, i;   

    if(scanf("%d", &N) != 1 || N <= 0) {
        return 1;   
    }
    struct Transaction transactions[N];
   
    for ( i = 0; i < N; i++)
    {
        if(scanf(" %f %s",&transactions[i].amount ,&transactions[i].description) != 2) {
        return 1;
    }
    }
    printf("%d" ,i );
    
    return 0;
}