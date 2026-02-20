#include <iostream>
#include <cstring>

using namespace std;

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
            cout << "[Current Node] Name: " << now->name 
                 << ", Age: " << now->age 
                 << ", GPA: " << now->gpa << endl;
        } else {
            cout << "List is empty." << endl;
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
        cout << "--- All Students in List ---" << endl;
        while (temp != nullptr) {
            cout << "Name: " << temp->name 
                 << " | Age: " << temp->age 
                 << " | GPA: " << temp->gpa << endl;
            temp = temp->next;
        }
        cout << "----------------------------" << endl;
    }
};

int main() {
    cout << "Testing LinkedList (Base):" << endl;
    LinkedList listA;
    listA.InsNodee("Somsak", 20, 'M', 3.50);
    listA.InsNodee("Somying", 21, 'F', 3.85);
    listA.ShowNode(); 
    listA.GoNext();
    listA.ShowNode(); 
    
    cout << endl;

    cout << "Testing NewList (Derived):" << endl;
    NewList listB;
    listB.InsNodee("Alice", 19, 'F', 3.90);
    listB.InsNodee("Bob", 22, 'M', 2.75);
    listB.InsNodee("Charlie", 20, 'M', 3.20);
    
    listB.ShowNode();
    
    return 0;
}