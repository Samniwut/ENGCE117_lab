#include<stdio.h>

int calculate_sum(int arr[], int SIZE);
int main(){
    int SIZE = 5 ;
    int number[SIZE];
    int total_sum = 0 , i;
    float average;

    printf("Enter %d integer number : \n" , SIZE);
    for(i = 0 ;  i < SIZE ; i++){
        printf("Number %d : ",i+1);
        scanf("%d",&number[i]);
    }
    total_sum = calculate_sum(number,SIZE);
    average = (float)total_sum / SIZE ;
    
    printf("\n -- ARRAY AVERAGE REPORT --- \n");
    printf("Recorded Number : ");
    for(i = 0 ; i < SIZE ; i++){
        printf("%3d",number[i]);
    }

    printf("\n Total Sum : %d\n",total_sum);
    printf("Average : %.0f\n",average);

    return 0;
}
int calculate_sum (int arr[], int SIZE){
    int sum = 0;
   for(int i = 0 ; i < SIZE ;i++){
      sum += arr[i];
   }
   return sum;
}