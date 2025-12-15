#include <stdio.h>

int main(){
    int SIZE = 3;
    int date[SIZE];
    int *ptr[SIZE];
    int i;

    printf("Enter %d integer elements for the array : \n",SIZE);
    for(i = 0 ;i < SIZE ;i++){
        printf("Element %d : ",i);
        scanf("%d",&date[i]);
        ptr[i]= &date[i];
    }

    printf("Index | Value (Direct) | Value (via Pointer) | Address)\n");
    printf("------|----------------|---------------------|---------\n");
    for(i =0 ; i < SIZE ; i++){
        printf("%d | %d | %d | %p\n",i,date[i],*ptr[i],(void *)ptr[i]);
    }
    return 0;
}