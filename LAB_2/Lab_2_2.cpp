#include <stdio.h>

float calculateItemCost(int N ,float unitPrice, int quantity);

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;

    if (scanf("%d", &N) != 1 && N <= 0) {
        printf("Error\n");
        return 1;
    }
     grandTotal = calculateItemCost(N, unitPrice, quantity);
    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}
float calculateItemCost(int N ,float unitPrice, int quantity) {
    float itemCost, grandTotal = 0.0, discount =0.0 , Discount_itemCost=0.0;
    int i;
    for (i = 0; i < N; i++) {
        if (scanf("%f %d", &unitPrice, &quantity) != 2) {
            printf("Error\n");
            return 1;
        }
        itemCost = unitPrice * quantity;
        if (itemCost > 1000)
        {
            discount = itemCost * 0.1;
            itemCost = itemCost - discount;
        } 
        grandTotal += itemCost;
        itemCost = 0.0;
        
    }
    return grandTotal;
}