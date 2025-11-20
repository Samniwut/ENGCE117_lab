#include <stdio.h>
float calculate_household(float consumption_kWh,float unit);

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
          if(consumption_kWh <= 100){
           totalBill=calculate_household(consumption_kWh,3);
          }else{
          totalBill=calculate_household(consumption_kWh,4);
          }
      break;
      case 2 :
          if(consumption_kWh <= 500){
           totalBill=calculate_household(consumption_kWh,5);
          }else{
          totalBill=calculate_household(consumption_kWh,6.5);;
          }
      break;
      default:
        printf("Invalid Customer Type");
        return 0;
    }
    // TODO: Implement the main if-else logic based on customerType,
    // and the nested if-else logic based on consumption_kWh.

    if (totalBill > 0.0 || customerType == 3) { // Use totalBill > 0.0 to check if calculation succeeded
        printf("%.2f\n", totalBill);
    }

    return 0;
}

float calculate_household(float consumption_kWh,float unit  ){
   float totalBill = 0.0;
   totalBill = consumption_kWh * unit;
   return totalBill;
}
