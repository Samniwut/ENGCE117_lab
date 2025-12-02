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
      
       if(scanf("%s %f %d",Item[i].name,&Item[i].unitPrice,&Item[i].quanatity) !=3){
        return 1 ;
       }
      ItemCost = Item[i].unitPrice*Item[i].quanatity;
       printf("Name : %s  x Qty : %.2f  = %.2f",Item[i].name,Item[i].quanatity,ItemCost);
     
       subtotal += ItemCost;
    }
    
    totalVat = subtotal * VAT_RATE;
    gradTotal =  subtotal+totalVat;

    printf("SubTotal : %f\n",subtotal);
    printf("VAT (7%) : %f \n",totalVat);
    printf("Grand Total : %f\n",gradTotal);



   
    return 0;

}