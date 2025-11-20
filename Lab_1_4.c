#include <stdio.h>

int calculatesum(int N);
int main()
{
    int N, sum = 0 ;
   if(scanf("%d",&N)!= 1 || N<=0){
    printf("Error");
    return 1;
   }else{
     sum = calculatesum(N);
   }
   printf("%d",sum);
    return 0;
}
int calculatesum(int N){
    int resultsum = 0;
    for(int i=0; i<=N ;i++){
    resultsum +=i;
   }
   return resultsum;
}