#include <stdio.h>
struct Student{
    char name[20];
    int age;
};
struct Student (*GetStudent(int *room)) [10];

int main(){
struct Student (*Childent)[10];
int group;
printf("Enter number of groups (1-20): ");
scanf("%d", &group);
if(group < 1 || group > 20){
    printf("Invalid number of groups.\n");
    return 1;
}
Childent = GetStudent(&group);
for(int i=0; i<group; i++){
    printf("\nGroup %d:\n", i+1);
    for(int j=0; j<10; j++){
        printf("Student %d: Name: %s, Age: %d\n", j+1, Childent[i][j].name, Childent[i][j].age);
    }
}
return 0;
}
struct Student (*GetStudent(int *room)) [10]{
    static struct Student Childent[20][10];
    for(int i=0; i<*room; i++){
        for(int j=0; j<10; j++){
            printf("Enter name of student %d in group %d: ", j+1, i+1);
            scanf("%s", Childent[i][j].name);
            printf("Enter age of student %d in group %d: ", j+1, i+1);
            scanf("%d", &Childent[i][j].age);
        }
    }
    return Childent;
}





