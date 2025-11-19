#include <stdio.h>
int main()
{
    int N, sum = 0, i;
   scanf("%d",&N);
   if(N<0){
    printf("Erorr");
    return 0;
   }
   for(i=0; i<=N ; i++){
    sum +=i;
   }
   printf("%d",sum);
    return 0;
}
