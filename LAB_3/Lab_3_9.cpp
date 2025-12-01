#include <stdio.h>
float RemainingBudget(float remainingBudget);

int main(){
    float initalBudget , dailySend ,remainingBudget;
    int N_DAYS , day ;

    if(scanf("%f  %d",&initalBudget,&N_DAYS) != 2){
        return 1 ;
    }

    remainingBudget = initalBudget;

    printf("Day  |  Spend  |  Remaining \n");
    printf("-------------------------------\n");

 for (day = 0; day < N_DAYS; day++){
     dailySend = 0.0 ;
    dailySend = RemainingBudget(remainingBudget);

    if(dailySend > remainingBudget){
        dailySend = remainingBudget;
    }

    remainingBudget -= dailySend;
    printf("%d  |  %.2f  | %.2f\n",day+1,dailySend,remainingBudget);
    }
    
    printf("-------------------------------\n");
    printf("Final Budget : %.2f\n",remainingBudget);
    return 0;
}

float RemainingBudget(float remainingBudget){
    float dailySend;
    if(remainingBudget >= 500){
       dailySend = 100;
    }else if(remainingBudget >= 100 || remainingBudget <= 499.99){
       dailySend = 50;
    }else if (remainingBudget > 0){
       dailySend = 20;
    }else{
       dailySend = 0.0;
    }
    return dailySend;
}