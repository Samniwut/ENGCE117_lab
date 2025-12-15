#include <stdio.h>
int calculate_net_balance(int *trens_array,int size);
int main(){
    int size = 5;
    int transactions[size] , net_balance = 0, i;
    char *finance_status;
    
    printf("Enter %d transaction (Income + , Expense -): \n",size);
    net_balance = calculate_net_balance(&transactions,size);
    printf("\n -- PERSONAL FINACE REPORT -- \n");
    printf("Transactions Recorded: ");
    for( i = 0 ; i < size ; i++){
        printf("%d ",transactions[i]);
    }
    finance_status = (net_balance >= 0)? "PROFIT" : "LOSS";
    printf("\nNet Balane : %d\n",net_balance);
    printf("Status : %s\n",finance_status);
    return 0;
}
int calculate_net_balance(int *transactions,int size){
    int net_balance = 0.0;
 for (int i = 0 ; i < size ; i++){
        printf("Tramsactions %d ",i+1);
        if(scanf("%d",&transactions[i]) != 1){
            return 1;
        }
        net_balance += transactions[i];
    }
    return net_balance;
  }
