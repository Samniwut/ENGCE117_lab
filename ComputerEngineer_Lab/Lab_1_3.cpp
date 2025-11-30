#include <stdio.h>
int *Getset(int *arr);

int main() {
    int *data,number;
    if (scanf("%d", &number) != 1){   
        return 0;
    }
    data = Getset(&number);
    printf("%d",*data);
    return 0;
}
int *Getset(int *arr){
    return arr + 2;
}