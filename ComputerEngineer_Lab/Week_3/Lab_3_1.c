#include <stdio.h>
struct Student
{
    char name[20];
    int age;
    int sex ; 
    float gpa;
};
typedef struct Student aboy;
void print_student(aboy *student);
void upgrade(aboy *student);
int main(){
    aboy student1 = {"Alice", 25,'M', 3.00};
    print_student(&student1);
    printf("\n");
    upgrade(&student1);
    printf("After upgrade function call:\n\n");
    print_student(&student1);
    return 0;
}
void upgrade(aboy *student){
   float gpa_uprate = 0.0;
   if (student->sex == 'M'){
    gpa_uprate = 0.1;
   }
   else if (student->sex == 'F'){
    gpa_uprate = 0.2;
   }
   gpa_uprate = student->gpa * gpa_uprate;
   student->gpa += gpa_uprate;
}
void print_student(aboy *student){
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Sex: %c\n", student->sex);
    printf("GPA: %.2f\n", student-> gpa);
}