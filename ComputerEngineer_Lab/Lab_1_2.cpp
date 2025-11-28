#include <stdio.h>

void Getset(int **date, int *num);
int main() {
    int *date , num;
    scanf("%d %d",&date,&num);
    Getset(&date, &num);
    return 0;
}

void Getset(int **date, int *num){
    for(int i=0; i<**date; i++){
        printf("%d ", date[i]);
    }
    
}