#include <stdio.h>
#include <stdlib.h>

int *GetMatrix(int *row , int *col);

int main(){
    int *data , m, n ;
    data = GetMatrix(&m,&n);
    if (data == NULL) {
        return 1;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }
    return 0;
}
int *GetMatrix(int *row , int *col){
    int *a ;
    printf("How many row col ? ");
    if (scanf("%d %d", row , col) != 2) {
        return 1 ;
    }
    a = (int *)malloc(sizeof(int) * (*row * *col));

    for (int i = 0; i < *row; i++){
       for (int j = 0; j < *col; j++){
           if (scanf("%d", &a[i * (*col) + j]) != 1) {
               return 1;
           }
       }
    }
    return a ;
}
