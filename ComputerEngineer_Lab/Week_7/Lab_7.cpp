#include <stdio.h>
#include <stdlib.h> 
#include <string.h>


struct studentNode {
    char name[20];
    int age; 
    char sex;
    float gpa;
    studentNode *next; 
};

class LinkedList {
protected:
    studentNode *start; 
    studentNode *now;   

public:
    LinkedList() {
        start = nullptr;
        now = nullptr;
    }
    virtual ~LinkedList() {
        studentNode *temp;
        while (start != nullptr) {
            temp = start;
            start = start->next;
            delete temp;
        }
    }
    void InsNodee(const char n[], int a, char s, float g) {
        studentNode *newNode = new studentNode;
        strcpy(newNode->name, n);
        newNode->age = a;
        newNode->sex = s;
        newNode->gpa = g;
        newNode->next = nullptr;

        if (start == nullptr) {
            start = newNode;
            now = start;
        } else {
            studentNode *temp = start;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void GoNext() {
        if (now != nullptr && now->next != nullptr) {
            now = now->next;
        }
    }
    virtual void ShowNode() {
        if (now != nullptr) {
            // ใช้ %-20s เพื่อจองที่ว่าง 20 ตัวอักษรให้ชื่อดูเป็นระเบียบ
            // ใช้ %.2f เพื่อแสดงทศนิยม 2 ตำแหน่ง
            printf("[Current Node] Name: %-15s, Age: %d, Sex: %c, GPA: %.2f\n", 
                   now->name, now->age, now->sex, now->gpa);
        } else {
            printf("List is empty.\n");
        }
    }
};

class NewList : public LinkedList {
public:
    void GoFirst() {
        now = start;
    }
    virtual void ShowNode() override {
        studentNode *temp = start;
        printf("--- All Students in List ---\n");
        while (temp != nullptr) {
            printf("Name: %-15s | Age: %2d | Sex: %c | GPA: %.2f\n", 
                   temp->name, temp->age, temp->sex, temp->gpa);
            temp = temp->next;
        }
        printf("----------------------------\n");
    }
};

int main() {
    printf("Testing LinkedList (Base):\n");
    LinkedList listA;
    listA.InsNodee("Somsak", 20, 'M', 3.50);
    listA.InsNodee("Somying", 21, 'F', 3.85);
    listA.ShowNode(); 
    listA.GoNext();
    listA.ShowNode(); 
    
    printf("\nTesting NewList (Derived):\n");
    NewList listB;
    listB.InsNodee("Alice", 19, 'F', 3.90);
    listB.InsNodee("Bob", 22, 'M', 2.75);
    listB.InsNodee("Charlie", 20, 'M', 3.20);
    
    listB.ShowNode();
    
    return 0;
}