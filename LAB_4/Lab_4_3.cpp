#include <stdio.h>
void print_line();
 int main(){
    int DAYS = 7;
    int daily_temp[DAYS];
    int max = 0;
    int i ;

    for(i =0 ; i < DAYS ; i++){
       if(scanf("%d",&daily_temp[i]) != 1){
        break;
       }
       if(daily_temp[i] > max){
        max = daily_temp[i];
       }
    }
    print_line();
 for ( i = 0; i < DAYS; i++){
 printf(" %d" ,daily_temp[i]);
 }
 printf("\nMaxinun Temperature Found : %d\n",max);
 (max >= 35)? printf("Weather is HOT !\n"): printf("Weather is MODERATER.\n");
    return 0; 

 }
 void print_line(){
 printf("-- DAILY TEMPERATURE REPORT -- \n");
 printf("Recorded Temperature (C) : "); 
 }