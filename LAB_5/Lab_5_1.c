#include <stdio.h>
 int input_lenght ,intput_width,result_area;
int calculate_Area(int lenght , int widht);
void GetInput();
void GetOutput();
int main(){

  GetInput();
 result_area =  calculate_Area(input_lenght,intput_width);
  GetOutput();
    return 0;
}
void GetInput(){
 printf("Input Lenght : ");
 scanf("%d",&input_lenght);
 printf("Input width : ");
 scanf("%d",&intput_width);
}
int calculate_Area (int lenght , int widht){
    return lenght+widht;
}
void GetOutput(){
  printf("\n-- RETANGLE AREA REPORT -- \n");
  printf("Length : %d\n ",input_lenght);   
  printf("Width : %d\n ",intput_width);
  printf("Calculated Area : %d\n",result_area) ; 
}
