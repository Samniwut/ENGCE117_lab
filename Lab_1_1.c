#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d",&N);
    if( N <= 0){
        printf("Erorr");
    }else{
    for(i=0; i<N ;i++){
        printf("Hello Loop!\n");
    }
    }
    return 0;
}
