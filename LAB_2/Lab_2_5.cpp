#include <stdio.h>
int main (){
    int score ; 
    int countA = 0 , countB = 0, countC = 0 , countD = 0, countF = 0;
     
    if(scanf("%d",&score) != 1 || score < -1 || score > 100){
        printf("Error");
        return 1 ;
    }

    while (score > 0)
    {
        if (score >= 80 && score <= 100){
            countA++;
        }
        else if (score >= 70 && score <= 79){
            countB++;
        }
        else if (score >= 60 && score <= 69){
            countC++;
        }
        else if (score >= 50 && score <= 59){
            countD++;
        }else{
            countF++;
        }
     if(scanf("%d",&score) != 1 || score < -1 || score > 100){
        printf("Error");
        return 1 ;
    }
    }
    
    printf("Grade A Count : %d \n ", countA);
    printf("Grade B Count : %d \n ", countB);
    printf("Grade C Count : %d \n ", countC);
    printf("Grade D Count : %d \n ", countD);
    printf("Grade F Count : %d \n ", countF);
    return 0;
}