#include <stdio.h>

int main(){
    int N_PERIODS, cmdCode, i;
    float initialBalance ,PRMALTYY_FEE, amount, interestRate = 0.0; 
    float currentBalance ; 
    float totalPenalties = 0.0 ; 

    if (scanf("%f %f %d", &initialBalance,&PRMALTYY_FEE,&N_PERIODS) != 3) {
        return 1;
    }   
    currentBalance = initialBalance;
    printf("Starting Balance: %.2f\n", currentBalance);

    for ( i = 0; i < N_PERIODS; i++)
    {  
        if(scanf("%d %f", &cmdCode,&amount) != 2){
            break;
         }
         printf("--- Month %d ---\n",i+1);
          switch (cmdCode){
        case 1:
            currentBalance+= amount;
            printf("Deposit : %.2f \n", amount);
            break;
        case 2:
            if(amount <= currentBalance){
                //currentBalance -= amount;
                printf("Withdrawal of %.2f successful. Current balance: %.2f\n", amount, currentBalance);
            }else{
                totalPenalties += PRMALTYY_FEE;
                printf("WITHDRAWAL FAILED. Penalty %.2f applied .\n", PRMALTYY_FEE);
                }
            break;
        case 3:
            if(currentBalance >= 1000.0){
                const float APR_HIGH = 2.5 / 100;
                interestRate = initialBalance * (APR_HIGH/10);
                
            }else{
                const float APR_LOW = 1.0 / 100;
                interestRate = initialBalance * (APR_LOW/10);
                     
            }
              currentBalance += interestRate;
                printf("Interest %.2f (Rate : %.2f%%) \n", interestRate,APR_HIGH*100); 
            break;
            
        default:
        printf("Error : lnvalid Cpmmand.\n");
        break;
        }
        }

    // Final balance calculation

    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);
    return 0;
}