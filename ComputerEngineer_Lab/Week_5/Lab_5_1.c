#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct studentNode{
   char name[50];
   int age;
   char sex;
   float gpa;
 struct studentNode* next;
 };
typedef struct studentNode studentNode;

void ShowAll(studentNode *walk){
  while(walk != NULL){
    printf("%s -> ", walk->name);
    walk = walk->next;
  }
  printf("\n");
}

int main() {
  studentNode *start, *now;
  start = NULL;
studentNode s1, s2, s3;
strcpy(s1.name, "one");
strcpy(s2.name, "two");
strcpy(s3.name, "three");
start = &s1;
s1.next = &s2;
s2.next = &s3;
s3.next = NULL;

ShowAll(start);
//   now = AddNode(&start, "one"); ShowAll(start);
//   now = AddNode(&start, "two"); ShowAll(start);
    return 0;
}