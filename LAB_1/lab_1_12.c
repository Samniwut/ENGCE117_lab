#include <stdio.h>
int calculateTotalBill(int planCode, float dataUsage_GB);
int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    
    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        return 1; 
    }
    totalBill = calculateTotalBill(planCode, dataUsage_GB);

    if (planCode == 1 || planCode == 2) {
        printf("%.2f\n", totalBill);
    } else {
        printf("Invalid Plan Code\n");
    }//end if
    return 0;
} 
int calculateTotalBill(int planCode, float dataUsage_GB) {
    float totalBill = 0.0;
    switch (planCode)
    {
    case 1:
        if (dataUsage_GB <= 10){
            totalBill = 299.0;
        }
        else{
            totalBill = 299.0 + 10.0*(dataUsage_GB-10);
        }
        break;
    case 2:
        if (dataUsage_GB <= 20){
            totalBill = 599.0;
        }
        else{
            totalBill = 599+50+5*(dataUsage_GB-20);
        }
        break;
    default:
        break;
    }//end switch
    return totalBill;
}