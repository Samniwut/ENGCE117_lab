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
    while (principal > 0)
    {
    interest = principal * INTEREST_RATE ;
    principal += interest ;

    if (principal < monthlyPayment)
    {
        principal + PRNALTY;
    }
    principal -= monthlyPayment ;
    monthCount++ ;
    printf("Month %d Remaining: %.2f\n",monthCount,principal);
    }
    return 0;
}