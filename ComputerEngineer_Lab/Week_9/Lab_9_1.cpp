#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

class LinkedList {
    protected:
        struct studentNode *start, *now;
    public:
        LinkedList();
        ~LinkedList();
        void InsNode(const char name[], int age, char sex, float gpa);
        void GoNext();
        virtual void ShowNode();
        void DelNode();
};

class NewList: public LinkedList {
    public:
        void GoFirst();
        virtual void ShowNode();
};

void EditData (LinkedList *ll);
void addData (LinkedList *ll);
void FindData (LinkedList *ll);
void readData (LinkedList *ll);
void writeData (LinkedList *ll);

int main() {
    LinkedList listA;
    int menu ;
    readfile(&listA);
    printf("menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit :");
    scanf("%d", &menu);
    while (menu != 0)
    {
        switch (menu)
        {
        case 1:
            Add
            break;
        case 2:
            /* code */
            break;
        
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        
        default:
            break;
        }
    }
    

   

    return 0;
}
void LinkedList::InsNode(const char name[], int age, char sex, float gpa) {
    studentNode *newNode = (studentNode*)malloc(sizeof(studentNode));

    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;
    newNode->next = NULL;

    if(start == NULL) {
        start = newNode;
        now = start;
    } else {
        studentNode *temp = start;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void LinkedList::GoNext() {
    if(now != NULL) {
        now = now->next;
    }
}
void LinkedList::DelNode() {
    if(now == NULL) {
        return;
    }

    if(now == start) {
        start = start->next;
        free(now);
        now = start;
    } else {
        studentNode *temp = start;
        while(temp->next != now) {
            temp = temp->next;
        }
        temp->next = now->next;
        free(now);
        now = temp->next;
    }
}
void NewList::GoFirst() {
    now = start;
}
void LinkedList::ShowNode() {
    if(now != NULL) {
        printf("%s %d %c %.2f\n",now->name, now->age, now->sex, now->gpa);
    }
}
void NewList::ShowNode() {
    if(now != NULL) {
        printf("%s %d %.2f\n",now->name, now->age, now->gpa);
    }
}
LinkedList::LinkedList() {
    start = NULL;
    now = NULL;
}
LinkedList::~LinkedList() {
    while(start != NULL) {
        studentNode *temp = start;
        start = start->next;
        free(temp);
    }
}