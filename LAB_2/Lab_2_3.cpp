#include <stdio.h>
float calculateAprRate(float investmentAmount , float aprRate );
float getAprRate(int termCode , int investmentAmount);
int main() {
    int termCode;
    float investmentAmount;
    float totalInterest = 0.0;
    
    if (scanf("%d %f", &termCode, &investmentAmount) != 2) {
        return 1; 
    }
    if (termCode >= 1 && termCode <= 3) {
        totalInterest = getAprRate(termCode, investmentAmount);
        printf("%.2f\n", totalInterest);
    } else {
        printf("Invalid Term Code\n");
    }
    return 0;
}

float getAprRate(int termCode , int investmentAmount) {
    float aprRate = 0.0;
    switch (termCode)
    {
    case 1:
       if (investmentAmount >= 5000){
        aprRate =calculateAprRate(investmentAmount ,0.04);
       }else{
        aprRate =calculateAprRate(investmentAmount ,0.03);
        }
        break;
    case 2:
        if (investmentAmount >= 10000)
        {
        aprRate = calculateAprRate(investmentAmount ,0.065);
        }else{
        aprRate = calculateAprRate(investmentAmount ,0.05);
        }
        break;
    case 3:
       aprRate = calculateAprRate(investmentAmount ,0.08);
        break;
    default:
        break;
    }
    return aprRate;
}
float calculateAprRate(float investmentAmount , float aprRate ) {
    float totalaprRate = 0.0; 
    totalaprRate =  investmentAmount*aprRate;
    return totalaprRate;
}

