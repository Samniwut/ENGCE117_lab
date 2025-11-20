// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N;

    // รับค่า N (จำนวนรอบ)
    if (scanf("%d", &N) != 1) {
            printf("Error");
        return 0;// Handle input failure
    }
    if(N<=0){
        printf("Error");
    }else{
      for(int i=0; i<N ;i++){
        printf("Hello Loop!\n");
    }
    }
    // TODO: Implement the for loop to print the message N times

    return 0;
}