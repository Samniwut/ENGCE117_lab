#include <stdio.h>
void Printf_Line();

int main (){
    int choice;
    float totalCost = 0.0;
    float Product_price = 0.0;
    float paidAmount = 0.0 , change = 0.0;
     do
     {
        Product_price = 0.0;
        Printf_Line();
        if(scanf("%d",&choice) != 1){
        return 1 ;
    }
    printf("Current Total : %.2f\n",totalCost);
    if(choice == 1){
        Product_price = 15 ;
    }else if (choice == 2){
        Product_price = 10 ;
    }else if(choice == 3){
        Product_price = 25;
    }
     totalCost += Product_price;
     
     printf("Select Item (1-4):added. Cuurrent Total: %.2f\n ",totalCost);
     } while (choice != 4);
     
     if(totalCost > 0.0){
        printf("Total due : %.2f\n",totalCost);
        printf("Enter paid amount : ");
        if(scanf("%f",&paidAmount) != 1){
            return 1 ;
        }
     if (paidAmount >= totalCost){
        change = paidAmount - totalCost;
        printf("Enter paid amount: Purchase successful. Change: %.2f\n",change);
     }else if(paidAmount < totalCost){
        printf("Insufficient payment. Purchase cancelled.\n");
     }
    }else{
        printf("No items ppurchased. Goodbye! \n");
    }
    return 0;
}

void Printf_Line(){
    printf("\n--- Vending Maxhine --\n");
    printf("1.Coke (15.00)\n");
    printf("2.Water (10.00)\n");
    printf("3.Snack (25.00)\n");
    printf("4.Exit and Pay\n");
}