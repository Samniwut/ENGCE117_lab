#include<stdio.h>
void printLine(float totalInciome, float totalExpense, float netBalance);

struct Transaction {
    char description[50];
    float amount;
};
int main(){
    int N, i;
    float totalInciome = 0.0, totalExpense = 0.0 ,netBalance = 0.0;   

    if(scanf("%d", &N) != 1 || N <= 0) {
        return 1;   
    }
    struct Transaction transactions[N];
    
    for ( i = 0; i < N; i++)
    {
        if(scanf("%f %s",&transactions[i].amount ,&transactions[i].description) != 2) {
        return 1;
     }
    (transactions[i].amount >= 0) ? (totalInciome += transactions[i].amount) : (totalExpense += -transactions[i].amount);
    //  if(transactions[i].amount >= 0) {
    //     totalInciome += transactions[i].amount;
    //  }else if (transactions[i].amount < 0) {
    //     totalExpense += transactions[i].amount;
    //  }
    } 
    netBalance = totalInciome - totalExpense; 

    printLine( totalInciome,totalExpense,netBalance);
    return 0;
}
void printLine(float totalInciome, float totalExpense, float netBalance){
    printf("Total Income: %.2f\n", totalInciome );
    printf("Total Expense: %.2f\n", totalExpense );
    printf("Net Balance: %.2f\n", netBalance );
}
