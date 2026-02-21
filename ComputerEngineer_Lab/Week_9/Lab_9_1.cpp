#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

class LinkList {
    protected:
        struct studentNode *start;
        struct studentNode *now;
    public:
        LinkList();
        ~LinkList();
        void InsNode(char n[], int a, char s, float g);
        void DelNode(char n[]);
        void GoFirst();
        void GoNext();
        void ShowAll();
        int FindNode(char n[]);
        struct studentNode *NowNode();
        void EditNode(char n[], int a, char s, float g);
};

void EditData(LinkList *ll);
void AddData(LinkList *ll);
void Finddata(LinkList *ll);
void Readfile(LinkList *ll);
void Writefile(LinkList *ll);


int main() {
    LinkList listA;
    int menu;
    char name[20];
    Readfile(&listA);
    printf("Menu (1)Add (2)Edit (3)Delete (4)Find (5)Show (0)Exit: ");
    scanf("%d", &menu);
    while (menu != 0) {
        switch (menu) {
        case 1:
            AddData(&listA);
            break;
        case 2:
            EditData(&listA);
            break;
        case 3:
            printf("Enter name to delete: ");
            scanf("%s", name);
            listA.DelNode(name);
            break;
        case 4:
            Finddata(&listA);
            break;
        case 5:
            listA.ShowAll();
            break;
        }
        printf("Menu (1)Add (2)Edit (3)Delete (4)Find (5)Show (0)Exit: ");
        scanf("%d", &menu);
    }
    Writefile(&listA);
    return 0;
}
void Readfile(LinkList *ll) {
    FILE *fp;
    char name[20], sex;
    int age;
    float gpa;
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("No file found. Create new file\n");
        return;
    }
    while (fscanf(fp, "%s %d %c %f", name, &age, &sex, &gpa) == 4) {
        ll->InsNode(name, age, sex, gpa);
    }
    fclose(fp);
}

void Writefile(LinkList *ll) {
    FILE *fp;
    struct studentNode *temp;
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return;
    }
    ll->GoFirst();
    temp = ll->NowNode();
    while (temp != NULL) {
        fprintf(fp, "%s %d %c %.2f\n",
                temp->name,
                temp->age,
                temp->sex,
                temp->gpa);
        ll->GoNext();
        temp = ll->NowNode();
    }
    fclose(fp);
}

void AddData(LinkList *ll) {
    char name[20], sex;
    int age;
    float gpa;
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Sex: ");
    scanf(" %c", &sex);
    printf("GPA: ");
    scanf("%f", &gpa);
    ll->InsNode(name, age, sex, gpa);
}

void Finddata(LinkList *ll) {
    char name[20];
    printf("Enter name to find: ");
    scanf("%s", name);
    if (ll->FindNode(name)) {
        struct studentNode *temp = ll->NowNode();
        printf("Found: %s %d %c %.2f\n",
               temp->name,
               temp->age,
               temp->sex,
               temp->gpa);
    } else {
        printf("Not found\n");
    }
}

void EditData(LinkList *ll) {
    char name[20], sex;
    int age;
    float gpa;
    printf("Enter name to edit: ");
    scanf("%s", name);
    if (ll->FindNode(name)) {
        printf("New Name: ");
        scanf("%s", name);
        printf("New Age: ");
        scanf("%d", &age);
        printf("New Sex: ");
        scanf(" %c", &sex);
        printf("New GPA: ");
        scanf("%f", &gpa);
        ll->EditNode(name, age, sex, gpa);
        printf("Updated successfully\n");
    } else {
        printf("Student not found\n");
    }
}
LinkList::LinkList() {
    start = NULL;
    now = NULL;
}

LinkList::~LinkList() {
    struct studentNode *temp;
    while (start != NULL) {
        temp = start;
        start = start->next;
        free(temp);
    }
}

void LinkList::InsNode(char n[], int a, char s, float g) {
    struct studentNode *newNode = (struct studentNode*)malloc(sizeof(struct studentNode));
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;
    newNode->next = start;
    start = newNode;
}

void LinkList::DelNode(char n[]) {
    struct studentNode *temp = start, *prev = NULL;
    while (temp != NULL && strcmp(temp->name, n) != 0) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Student not found\n");
        return;
    }
    if (prev == NULL) {
        start = temp->next;
    }
    else {
        prev->next = temp->next;
    }
    free(temp);
    printf("Deleted successfully\n");
}

void LinkList::GoFirst() {
    now = start;
}

void LinkList::GoNext() {
    if (now != NULL) {
        now = now->next;
    }
}

struct studentNode* LinkList::NowNode() {
    return now;
}

int LinkList::FindNode(char n[]) {
    struct studentNode *temp = start;
    while (temp != NULL) {
        if (strcmp(temp->name, n) == 0) {
            now = temp;
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void LinkList::EditNode(char n[], int a, char s, float g) {
    if (now != NULL) {
        strcpy(now->name, n);
        now->age = a;
        now->sex = s;
        now->gpa = g;
    }
}

void LinkList::ShowAll() {
    struct studentNode *temp = start;
    while (temp != NULL) {
        printf("%s %d %c %.2f\n",
               temp->name,
               temp->age,
               temp->sex,
               temp->gpa);
        temp = temp->next;
    }
}


