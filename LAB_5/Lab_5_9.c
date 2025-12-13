#include <stdio.h>

struct Product{
    int item_id;
    float cost_peice;
    float sell_quantity;
    int stock_quantity;
};

struct Product item;

void Getinput();
float calculate_total_profit(float cost , float sell, int qty);
float calcaulate_profit_percentage(float cost , float sell);
int main(){

float total_profit;
float profot_percent;
char *status;
Getinput();
total_profit = calculate_total_profit(item.cost_peice,item.sell_quantity,item.stock_quantity);
profot_percent = calcaulate_profit_percentage(item.cost_peice,item.sell_quantity);

printf("\n --- INVENTORY PROFIT REPORT ---\n");
printf("Item Id : %d\n",item.item_id);
printf("Cost Prince : %.2f, Sell Price %.2f, Stock : %d\n",item.cost_peice,item.sell_quantity,item.stock_quantity);
printf("Total Profit : %.2f\n",total_profit);
printf("Profit Percentage : %.2f\n",profot_percent);
status = (profot_percent < 0 ) ? "Lass!" :"Profit";
printf("Status : %s\n",status );
    return 0 ;
}
void Getinput(){
printf("Enter Item ID : ");
scanf("%d",&item.item_id);

printf("Enter Cost Price per unit :");
scanf("%f",&item.cost_peice);

printf("Enter Sell Price per unit : ");
scanf("%f",&item.sell_quantity);

printf("Enter Stock Quantity :");
scanf("%d",&item.stock_quantity);
}
float calculate_total_profit(float cost , float sell, int qty){
 float sum = 0.0;
 float total_cost = cost*qty;
 float total_sell = sell*qty;
 sum = total_sell-total_cost;
 return sum;
}

float calcaulate_profit_percentage(float cost , float sell){
 float sum = 0.0;
 sum = (float)((sell-cost)/cost)*100;
 return sum;
}