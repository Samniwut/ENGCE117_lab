#include <stdio.h>
float *get_monthly_data(int *array, int MONTHS, char *type, float *total);
void print_monthly_date(char *type ,float *total);
int main(){
    int MONTHS = 3;
    int mouthly_revenue[MONTHS];
    int mouthly_expense[MONTHS];
    char *business_stus;
    float total_reveune = 0.0 , total_expense = 0.0, net_profit = 0.0;

 get_monthly_data(mouthly_revenue, MONTHS,"REVENUE",&total_reveune);
get_monthly_data(mouthly_expense, MONTHS,"EXPENSE",&total_expense);

print_monthly_date("REVENUE",&total_reveune);
print_monthly_date("EXPENSE",&total_expense);

net_profit = total_reveune - total_expense;

printf("NET PROFIT : %.2f\n",net_profit);
business_stus = (net_profit >= 0) ? "PROJECT IS PROFITABLE" : "PROJECT IS UNPROFITABLE";
printf("BUSINESS STATUS : %s\n",business_stus);

    return 0;
}
float *get_monthly_data(int *array, int MONTHS, char *type, float *total){
   *total = 0;
    printf("\n Enter %d months of %s values : \n",MONTHS,type);
   for (int i = 0 ; i < MONTHS ; i++){
    printf("Month %d %s : ",i+1,type);
    scanf("%d",&array[i]);
    *total += array[i];
   }
   printf("\n");
}
void print_monthly_date(char *type ,float *total){
        printf("TOTAL %s : %.2f \n",type,total);
}