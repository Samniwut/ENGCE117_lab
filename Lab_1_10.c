#include <stdio.h>
void  isAccessGranted(int clearanceLevel, int age, int isActive);
int main() {
    int clearanceLevel, age, isActive;

    if (scanf("%d %d %d", &clearanceLevel, &age, &isActive) != 3) {
        return 1; 
    }

    isAccessGranted(clearanceLevel, age, isActive);
    
    return 0;
}
void  isAccessGranted(int clearanceLevel, int age, int isActive) {
    if((clearanceLevel == 3 && isActive == 1) || (clearanceLevel == 2 && age >= 25 && isActive == 1)){
       printf("Access Granted\n");
    }
    else{
       printf("Access Denied\n");
    }
}