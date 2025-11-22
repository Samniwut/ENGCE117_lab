#include <stdio.h>
   int main() {

    int N, i;

    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error");
        return 1;
    }
    if (N > 0){
        for (int i = 0; i < N; i++){
            printf("Hello Loop!\n");
        }
    }
    return 0;
}


