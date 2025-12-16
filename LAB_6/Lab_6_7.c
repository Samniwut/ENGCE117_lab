#include <stdio.h>

float calculate_win_odds(int outs);
int main(){
    int card_outs;
    float win_probability;
    printf("Enter inieger card :");
    if(scanf("%d",&card_outs) != 1){
        return 1;
    }
    win_probability = calculate_win_odds(card_outs);
    printf("\n --- POKER PROBABILITY REPORT (2 Cards Remaining) ---\n");
    printf("Calculated Outs : %d\n",card_outs);
    printf("Win Probability (Odds x 4 ) : %.2f%% \n",win_probability);
    printf("Assessment : ");
    (win_probability >= 30)? printf("HIGH Win Probability\n") : printf("HIGH Win Probability\n");
    return 0;

}
float calculate_win_odds(int outs){
    outs *= 4;
    return outs;
}