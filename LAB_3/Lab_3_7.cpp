#include<stdio.h>

struct SalesRecord{
    char name[50];
    float target ;
    float actual; 
};

int main(){
     int N , i;
     float  grandTotalCommission = 0.0;

     if(scanf("%d",&N) != 1){
        return 1 ;
     }
    struct SalesRecord record[N];

     for(i = 0; i < N ; i++){
      
      float beseCommisstion = 0.0;

      scanf("%f %f %s",&record[i].target,&record[i].actual,&record[i].name);
       
      beseCommisstion = record[i].actual*0.1 ;

      if(record[i].actual > record[i].target*1.2){
        beseCommisstion += 200.0 ;
      }else if (record[i].actual >= record[i].target){
        beseCommisstion += 50.0 ;
      }else if (record[i].actual < record[i].target*.09){
        beseCommisstion -= 100;
      }
      
      grandTotalCommission += beseCommisstion;
     }

     printf("Grand Total Commission : %.2f\n",grandTotalCommission);
    return 0;
}