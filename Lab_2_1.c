#include <stdio.h>
   int main() {
    int N, i;
  scanf("%d",&N);
    if (N <= 0){
        printf("Error");
    }else{
        for (int i = 0; i < N; i++){
            printf("Hello Loop!\n");
        }
    }
    return 0;
}
