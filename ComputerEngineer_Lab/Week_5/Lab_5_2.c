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

studentNode* AddNode( studentNode **start, char name[], int age, char sex, float gpa);
void InsertNode(studentNode **target, char name[], int age, char sex, float gpa);
void Delete(studentNode **start);
void ShowAll(studentNode *walk);
void Gonext(studentNode **target);

int main() {
  studentNode *start, *now;
  start = NULL; now = NULL;
 InsertNode(&start, "one",5, 'M', 3.4);ShowAll(start);
 InsertNode(&start, "two",5, 'M', 3.4);ShowAll(start);
 Gonext(&start);
 InsertNode(&start, "tree",5, 'M', 3.4);ShowAll(start);
 InsertNode(&start, "four",5, 'M', 3.4);ShowAll(start);
 Gonext(&start);ShowAll(start);
 Delete(&start);ShowAll(start);
    return 0;
}
studentNode* AddNode( studentNode **start, char name[], int age, char sex, float gpa){
  studentNode *newNode = (studentNode*)malloc(sizeof(studentNode));
  strcpy(newNode->name, name);
    newNode->age = age; 
    newNode->sex = sex;
    newNode->gpa = gpa; 
    newNode->next = NULL;
    if (*start == NULL) {
        *start = newNode;
    } else {
        studentNode *temp = *start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return newNode;
}
void InsertNode(studentNode **target, char name[], int age, char sex, float gpa){
  studentNode *newNode = (studentNode*)malloc(sizeof(studentNode));
    strcpy(newNode->name, name);
    newNode->age = age; 
    newNode->sex = sex;
    newNode->gpa = gpa; 
    newNode->next = NULL;

     if (*target == NULL) {
        *target = newNode;
    } else {
        studentNode *temp = *target;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    }
void Delete(studentNode **start){
    
    if (*start == NULL) return; 

    if ((*start)->next == NULL) {
        free(*start);
        *start = NULL;
        return;
    }
    studentNode *temp = *start;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
void ShowAll(studentNode *walk){
  while(walk != NULL){
    printf("%s ", walk->name);
    walk = walk->next;
  }
  printf("\n");
}
void Gonext(studentNode **target){
     if (*target != NULL) {
        *target = (*target)->next;
    }
}