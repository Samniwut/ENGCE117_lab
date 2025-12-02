#include<stdio.h>
struct Item{
    char name[50];
    float unitPrice;
    int quanatity ;
    
};


int main(){
    
    int N,i;
    float VAT_RATE = 0.07 ;
    float totalVat = 0.0 ,gradTotal =0.0, subtotal = 0.0 ;


    if(scanf("%d",&N) != 1){
        return 1 ;
     }
   struct Item Item[N];

     for(i = 0; i <N ; i++){
      float ItemCost = 0.0;
      ;
      
       if(scanf("%s %f %d",&Item[i].name,&Item[i].unitPrice,&Item[i].quanatity) !=3){
        return 1 ;
       }
      ItemCost = Item[i].unitPrice*Item[i].quanatity;
       printf("Name : %s x %d  = %.2f\n",Item[i].name,Item[i].quanatity,ItemCost);
     
       subtotal += ItemCost;
    }
    
    totalVat = subtotal * VAT_RATE;
    gradTotal =  subtotal+totalVat;

    printf("SubTotal : %.2f\n",subtotal);
    printf("VAT (7%) : %.2f \n",totalVat);
    printf("Grand Total : %.2f\n",gradTotal);



   
    return 0;

}