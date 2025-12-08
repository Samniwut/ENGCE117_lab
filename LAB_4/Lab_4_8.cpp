#include <stdio.h>
int main(){
     int MAX_SIZE = 10;
    int date[MAX_SIZE] ,status[MAX_SIZE];
    int N ,i ,count;

    printf("Enter the number  of elements (N, max = %d):",MAX_SIZE);
    if(scanf("%d",&N) != 1){
        return 1;
    }
    if(N > MAX_SIZE || N < 1){
        N = MAX_SIZE ; 
    }

    printf("Enter %d integer number: \n",N);
    for(i = 0 ; i < N ; i++){
       if(scanf("%d",&date[i]) != 1){
        break;
       } 
    }
    printf("--FREQUENCY ANALYSIS REPORT--\n");
    printf("Total elements recorded (N): %d" , N);
    printf("Recorded Number: ");
   for ( i = 0; i < N; i++){
     printf(" %d" ,date[i]);
    }
  printf(" \n --FREQUENCY TABLE -- \n");
  printf("Number | Frequency\n");
  printf("------|------\n");
      
    for (i = 0; i < N; i++) {
        if (status[i] == -1) {
            continue;
        }
        count = 1; 
        for (int j = i + 1; j < N; j++) {
            if (date[i] == date[j]) {
                count++;
                status[j] = -1; 
            }
        }
        printf(" %d | %d\n", date[i], count);
    }
    return 0 ;

}