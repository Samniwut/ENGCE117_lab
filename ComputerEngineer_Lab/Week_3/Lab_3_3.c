#include <stdio.h>
 struct Student
{
    char name[20];
    int age;
    int sex ; 
    float gpa;
};

typedef struct Student student;
student upgrade(student aboy);
void print_student(student aboy);
int main(){
     student aboy = {"Alice", 25,'M', 3.00};
    print_student(aboy);
    printf("\nUpgrading GPA...\n\n");
    aboy = upgrade(aboy);
    print_student(aboy);
    return 0;
}   

void print_student(student aboy){
    printf("Name: %s\n", aboy.name);
    printf("Age: %d\n", aboy.age);
    printf("Sex: %c\n", aboy.sex);
    printf("GPA: %.2f\n", aboy.gpa);
}
student upgrade(student aboy){
    float gpa_uprate = 0.0;
    if(aboy.sex == 'M'){
        gpa_uprate = 0.1;
    }
    else if(aboy.sex == 'F'){
        gpa_uprate = 0.2;
    }
    gpa_uprate = aboy.gpa * gpa_uprate;
    aboy.gpa += gpa_uprate;
    return aboy;
}