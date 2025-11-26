#include <stdio.h>
int main(){

    int initialStock , N , cmdCode, quantity, i;
    float PENALTY_FEE;
    int currentStock;
    float totalPenalties = 0.0;

    if (scanf("%d %d %f",&initialStock, &N, &PENALTY_FEE) != 3){
        return 1;
    }
    currentStock = initialStock;  

    for(i = 0; i < N; i++){
        if(scanf("%d %d",&cmdCode, &quantity) != 2){
            break;
        }
    }

    return 0;
}