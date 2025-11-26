#include <stdio.h>

void currentBalancePrintf(float currentBalance);
void printFinalAndTotal(float currentBalance, float totalPenalties);


int main(){
    int N_PERIODS, cmdCode, i;
    float initialBalance ,PRMALTYY_FEE, amount, interestRate = 0.0; 
    float currentBalance ; 
    float totalPenalties = 0.0 , APR = 0.0; 

    if (scanf("%f %f %d", &initialBalance,&PRMALTYY_FEE,&N_PERIODS) != 3) {
        return 1;
    }   
    currentBalance = initialBalance;
    currentBalancePrintf(currentBalance);

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
                printf("WITHDRAWAL of %.2f successful.\n", amount);
                currentBalance -= amount;
            }else{
                totalPenalties += PRMALTYY_FEE;
                printf("WITHDRAWAL FAILED. Penalty %.2f applied .\n", PRMALTYY_FEE);
                }
            break;
        case 3:
            if(currentBalance >= 1000.00){
                APR = 2.5 ;
            }else if(currentBalance < 1000){
                APR = 1.0 ;
            }
              currentBalance += (interestRate = (currentBalance * (APR / 100) / 12));
                printf("Interest %.2f (Rate : %.2f%%) \n", interestRate,APR); 
            break;
            
        default:
        printf("Error : lnvalid Cpmmand.\n");
        break;
        }
        }
    printFinalAndTotal(currentBalance,totalPenalties);
    return 0;
}
void currentBalancePrintf(float currentBalance){
    printf("Starting Balance: %.2f\n", currentBalance);
}
void printFinalAndTotal(float currentBalance, float totalPenalties){
    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);
}