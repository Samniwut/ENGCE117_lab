#include <stdio.h>

int count_denomimation(int *change_remaining , int count);
void Getprint(int total_cost , int amount_paid, int change_amount);
int main(){
    int total_cost;
    int amount_paid;
    int change_amount;
    int *remaining_change;

    int count_1000 ,count_500,
    count_100 ,count_50,count_20,count_10,count_5,count_2,count_1;

    printf("Enter Total Cost (intrger):");
    scanf("%d",&total_cost);
    printf("Enter Amount Paid (intrger):");
    scanf("%d",&amount_paid);
    
    change_amount = amount_paid-total_cost;

    Getprint(total_cost,amount_paid,change_amount);

    if(change_amount < 0){
        printf("\nERROR : Amount PAid is less than Total Cost.\n");
        return 1;
    }
    int change_remaining = change_amount;
     
    printf("\n\nDenomimation Breakdown\n");
    count_1000 = count_denomimation(&change_remaining, 1000);
    count_500 = count_denomimation(&change_remaining, 500);
    count_100 = count_denomimation(&change_remaining, 100);
    count_50 = count_denomimation(&change_remaining, 50);
    count_20 = count_denomimation(&change_remaining, 20);
    count_10 = count_denomimation(&change_remaining, 10);
    count_5 = count_denomimation(&change_remaining, 5);
    count_2 = count_denomimation(&change_remaining, 2);
    count_1 = count_denomimation(&change_remaining, 1);

   if(count_1000 > 0) {printf("1000 Bath : %d\n", count_1000);}
   if(count_500 > 0) { printf("500 Bath : %d\n", count_500);}
   if(count_100 > 0) { printf("100 Bath : %d\n", count_100);}
   if(count_50 > 0) {printf("50 Bath : %d\n", count_50);}
   if(count_20 > 0) { printf("20 Bath : %d\n", count_20);}
   if(count_10 > 0) { printf("10 Bath : %d\n", count_10);}
   if(count_5 > 0) {printf("5 Bath : %d\n", count_5);}
   if(count_2 > 0) { printf("2 Bath : %d\n", count_2);}
   if(count_1 > 0) { printf("1 Bath : %d\n", count_1);}

    return 0;
}
void Getprint(int total_cost , int amount_paid, int change_amount){
    printf("Total Cost : %d\n",total_cost);
    printf("Amount Paid : %d\n",amount_paid);
    printf("Change Amount : %d\n",change_amount);
}
int count_denomimation(int *change_remaining , int count){
   int result;
    result = *change_remaining / count; 
    *change_remaining = *change_remaining % count;
    return result;
}
