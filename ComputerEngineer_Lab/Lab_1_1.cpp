#include <stdio.h>

void printHelloWorld(int N);
int main(){
    int N, i;
    if(scanf("%d", &N) != 1 || N <= 0){
        printf("Error");
        return 1;
    } 
    
    printHelloWorld(N);
    
    return 0;
}
void printHelloWorld(int N){
    for (int i = 0; i < N; i++){
        printf(" [%d] Hello, World!\n",i+1);
    }
}