#include <stdio.h>

void Getset(int *date[5], int *num);
int main() {
    int *date , num;
    scanf("%d %d",&date,&num);
    printf("%d %d",date,num);
    //Getset(&date, &num);
    return 0;
}

void Getset(int *date[5], int *num){
    for(int i=0; i<*num; i++){
        printf("%d ", *num);
    }
    
}