// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int customerType;
    float consumption_kWh;
    float totalBill = 0.0;
    
    // รับค่าประเภทลูกค้าและปริมาณการใช้ไฟฟ้า
    if (scanf("%d %f", &customerType, &consumption_kWh) != 2) {
        return 1; // Handle input failure
    }
    switch (customerType){
      case 1 :
          
      break;
      case 2 :
          
      break;
    }
    // TODO: Implement the main if-else logic based on customerType, 
    // and the nested if-else logic based on consumption_kWh.

    if (totalBill > 0.0 || customerType == 3) { // Use totalBill > 0.0 to check if calculation succeeded
        printf("%.2f\n", totalBill);
    } 

    return 0;
}

int calculate_household(){

}