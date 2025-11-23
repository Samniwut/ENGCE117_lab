#include<stdio.h>
int main (){
    float principal, monthlyPayment , interest;
    int monthCount ;
    const float INTEREST_RATE = 0.01;
    const float PRNALTY = 10.0 ;

    if (scanf("%f %f",&principal,&monthlyPayment) != 2 )
    { 
        printf("Error");
           return 1 ;
    }
    
    printf("Loan settled in %d month. \n",monthCount);
    return 0;
}