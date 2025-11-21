#include <stdio.h>
int totaCost1(int weight_kg);
int totalCost2(int weight_kg);
int main() {
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;
    
    // รับค่ารหัสโซนและน้ำหนัก
    if (scanf("%d %f", &zoneCode, &weight_kg) != 2) {
        return 1; // Handle input failure
    }
    switch (zoneCode)
    {
    case 1:
        totalCost = totaCost1(weight_kg);
        break;
    case 2:
        totalCost = totalCost2(weight_kg);
        break;
    case 3 :
      totalCost= 500;
        break;
    default:
        printf("Invalid Zone Code");
        return 0;
        break;
    }
    // TODO: Implement the switch statement based on zoneCode, 
    // and the nested if-else logic based on weight_kg.

    if (totalCost > 0.0 || zoneCode > 3 || zoneCode < 1) { // Check if calculation succeeded or if invalid code was found
        printf("%.2f\n", totalCost);
    } 

    return 0;
}
int totaCost1(int weight_kg){
    int cost;
    if(weight_kg <=5){
       cost = 50;
      }else{
      cost= 80;
      }
    return cost;
}
int totalCost2(int weight_kg){
    int cost;
    if(weight_kg <=10){
       cost = 150;
      }else{
      cost= 250;
      }
    return cost;
}