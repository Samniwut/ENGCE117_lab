#include <stdio.h>
 struct Student{
    char name[20];
    int age;
};
void GetStudent(struct Student Childent[20][10], int group);
void PrintStudent(struct Student Childent[20][10], int group);

int main() {
  struct Student Childent[20][10];
  int group;
  printf("Enter number of groups (1-20): ");
  scanf("%d", &group);
  (group < 1 || group > 20) ? printf("Invalid number of groups.\n") : GetStudent(Childent, group);
  PrintStudent(Childent, group);
    return 0;
}

void GetStudent(struct Student Childent[20][10], int group) {
    for(int i=0; i<group; i++){
        for(int j=0; j<10; j++){
            printf("Enter name of student %d in group %d: ", j+1, i+1);
            scanf("%s", Childent[i][j].name);
            printf("Enter age of student %d in group %d: ", j+1, i+1);
            scanf("%d", &Childent[i][j].age);
        }
    }
}
void PrintStudent(struct Student Childent[20][10], int group) {
    for(int i=0; i<group; i++){
        printf("\nGroup %d:\n", i+1);
        for(int j=0; j<10; j++){
            printf("Student %d: Name: %s, Age: %d\n", j+1, Childent[i][j].name, Childent[i][j].age);
        }
    }
}