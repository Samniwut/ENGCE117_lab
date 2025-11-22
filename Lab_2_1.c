#include <stdio.h>
int printHelloLoop(int N);
   int main() {
    int N, i;
  scanf("%d",&N);
    if (N <= 0){
        printf("Error");
    }else{
        printHelloLoop(N);
    }
    return 0;
}
int printHelloLoop(int N){
 for (int i = 0; i < N; i++){
            printf("Hello Loop!\n");
        }
}
