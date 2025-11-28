#include <stdio.h>
int Getset(int *arr);

int main() {
    int data,num;
    scanf("%d", &num);
    num = Getset(&data);
    return 0;
}
int Getset(int *arr) {
    for (int i = 0; i < 5; i++) {
        printf("%d ",*(arr+i));
    }
}