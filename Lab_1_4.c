#include <stdio.h>
int main()
{
    int N, sum = 0, i;
   if(scanf("%d",&N) || N<=0){
    printf("Erorr");
    return 1;
   }
   for(i=0; i<=N ; i++){
    sum +=i;
   }
   printf("%d",sum);
    return 0;
}
