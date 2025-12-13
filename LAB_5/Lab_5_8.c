#include <stdio.h>
struct Student{
   int id;
   int math_scroe;
   int science_scroe;
   int english_scroe;
   int total_scroe;
};
void print_Line(struct Student student_info , int total_score ,float final_average);
int main(){

float final_average = 0.0;
 struct Student student_info;

 printf("Enter Student ID : ");
 scanf("%d",&student_info.id);
 printf("Enter Math score : ");
 scanf("%d",&student_info.math_scroe);
 printf("Enter Science score : ");
 scanf("%d",&student_info.science_scroe);
 printf("Enter English score : ");
 scanf("%d",&student_info.english_scroe);

 student_info.total_scroe = student_info.math_scroe+student_info.science_scroe+student_info.english_scroe;
 final_average = (float)student_info.total_scroe / 3;
 print_Line(student_info,student_info.total_scroe,final_average);
 return 0;
}

void print_Line(struct Student student_info , int total_score ,float final_average){
    char garde;
    printf("\n --- STUDENT ACADMIC REPORT -- \n");
    printf("Student ID %d\n ",student_info.id);
    printf("Math Score :%d, Science Score %d, English Score %d\n ",student_info.math_scroe,student_info.science_scroe,student_info.english_scroe);
    printf("Total Score : %d\n",total_score);
    printf("Average Score : %.2f\n",final_average);
    if(total_score >= 250){
        garde = 'A';
    }else if(total_score >= 200 && total_score < 250){
        garde = 'B';
    }else{
        garde = 'C';
    }
    printf("Final Grade: %c\n",garde);
}