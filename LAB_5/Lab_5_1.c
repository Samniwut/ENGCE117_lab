#include <stdio.h>
 int input_lenght ,intput_width,result_area;
int calculate_Area(int lenght , int widht);
void GrtInput();
int main(){

  GrtInput();
 result_area =  calculate_Area(input_lenght,intput_width);
  printf("\n-- RETANGLE AREA REPORT -- \n");
  printf("Length : %d\n ",input_lenght);   
  printf("Width : %d\n ",intput_width);
  printf("Calculated Area : %d\n",result_area) ;  
    return 0;
}
void GrtInput(){
 printf("Input Lenght : ");
 scanf("%d",&input_lenght);
 printf("Input width : ");
 scanf("%d",&intput_width);
}
int calculate_Area (int lenght , int widht){
    return lenght+widht;
}