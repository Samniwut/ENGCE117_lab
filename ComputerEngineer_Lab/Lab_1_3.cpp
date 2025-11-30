#include <stdio.h>
int *Getset(int *arr);

int main() {
    int *data,num;
    scanf("%d", &num);

    data = Getset(&num);
    printf("data : %d",*data);
    return 0;
}
int *Getset(int *arr){
    return arr;
}