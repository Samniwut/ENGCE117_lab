#include <stdio.h>
float totalCost1(float weight_kg); 
float totalCost2(float weight_kg);
int main() {
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;
    if (scanf("%d %f", &zoneCode, &weight_kg) != 2) {
        fprintf(stderr, "Input reading failed.\n");
        return 1; 
    }
    
    switch (zoneCode) {
    case 1:
        totalCost = totalCost1(weight_kg); 
        break;
    case 2:
        totalCost = totalCost2(weight_kg); 
        break;
        
    case 3 :
        totalCost = 500.0; 
        break;
        
    default:
        printf("Invalid Zone Code\n");
        return 0; 
    }
    
    printf("Total Cost: %.2f Baht\n", totalCost);
    
    return 0;
}

float totalCost1(float weight_kg) {
    float cost;
    if (weight_kg <= 5.0) {
        cost = 50.0;
    } else { 
        cost = 80.0;
    }
    return cost;
}
float totalCost2(float weight_kg) {
    float cost;
    if (weight_kg <= 10.0) {
        cost = 150.0;
    } else { 
        cost = 250.0;
    }
    return cost;
}