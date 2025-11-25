#include <stdio.h>
int main(){
    int N_PERIODS, cmdCode, i;
    float initialBalance ,PRMALTYY_FEE, amount, interestRate = 0.0; 
    float currentBalance ;
    float APR_HIGH = 0.025; 
    float APR_LOW = 0.01;   
    float totalPenalties = 0.0 ; 

    if (scanf("%f %f %d", &initialBalance,PRMALTYY_FEE,&N_PERIODS) != 3) {
        return 1;
    }   
    for ( i = 0; i < N_PERIODS; i++)
    {  
        if(scanf("%d", &cmdCode) != 1){
            break;
         }
          switch (cmdCode){
        case 1:
            currentBalance+= amount;
            printf("Deposit : %.2f \n", amount);
            break;
        case 2:
            if(amount <= currentBalance){
                currentBalance -= amount;
                printf("Withdrawal of %.2f successful. Current balance: %.2f\n", amount, currentBalance);
            }else{
                totalPenalties += PRMALTYY_FEE;
                printf("WITHDRAWAL FAILED. Penalty %.2f applied .\n", PRMALTYY_FEE);
                }
            break;
        case 3:
            if(currentBalance >= 1000.0){
                interestRate = initialBalance * (APR_HIGH/12);
                printf("Interest %.2f (Rate : %.2f%) \n", interestRate,APR_HIGH*100);
            }else{
                interestRate = initialBalance * (APR_LOW/12);
                printf("Interest %.2f (Rate : %.2f%) \n", interestRate,APR_HIGH*100);      
            }
            break;
            
        default:
        printf("Error : lnvalid Cpmmand.\n");
        break;
        }
        }

    // Final balance calculation

    printf("Final Balance: %.2f\n", currentBalance - totalPenalties);
    printf("Total Penalties: %.2f\n", totalPenalties);
    return 0;
}