#include<stdio.h>
#include <stdlib.h>

int GetMatrix(int *row , int *col);

int main(){
    int *data , m,n ;
    scanf("%d %d",&m,&n);
    data = GetMatrix(&m,&n);
    return 0;
}

int GetMatrix(int *row , int *col){
    int *a ;
    printf("How many row col ?");
    scanf("%d %d", row , col);
    a = (int *)malloc(sizeof(int)*(*row * *col));
    for( int i = 0 ; i < *row ; i++){
       for(int j = 0 ; j < *col ; i++){
        scanf("%d" ,&a[i * *col + j]);
       }
    }
    return *a ;
}