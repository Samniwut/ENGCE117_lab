#include <stdio.h>
  
  long Sumloop (int n);
  long SumRecur (int n );
int main (){
      printf("SumLoop(n) = %d\n", Sumloop(10));
      printf("SumRecur(n) = %d\n", SumRecur(10));
    return 0;

}

  long Sumloop (int n){
    int i ;
    long fac = 1;
    for ( i = 1; i < n; i++)
        fac *= i;
    return fac;
    
  }
  long SumRecur (int n ){
    if (n>1)
      return n * SumRecur (n-1);
    return 1;
  }
