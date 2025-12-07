#include <stdio.h>
int main(){
    int N_CALCULATIONS ,i;
    int attkLvl, oppLvl, oppArmor;
    float baseAttack, DamageReduction, netDamage, damageDeficit;
    const float WROTH_THRESHOLD = 150.0;

    if(scanf("%d",&N_CALCULATIONS) != 1){
        return 1; 
    }

    for(i = 0;i < N_CALCULATIONS ; i++){
        if(scanf("%d %d %d",&attkLvl,&oppLvl,&oppArmor) != 3){
            break;
        }

     baseAttack = attkLvl *10.0;

     (oppArmor < 50) ? DamageReduction = 0.20 : DamageReduction =0.40 ;
      
     netDamage = baseAttack * (1.0 - DamageReduction);

     if(netDamage >= WROTH_THRESHOLD){
        printf("SUCCESS ! Net Damage : %.2f\n",netDamage);
     }else{
        damageDeficit = WROTH_THRESHOLD - netDamage;
        printf("FAIL. Deficit: %.2f\n",damageDeficit);
     }
}
return 0;
}