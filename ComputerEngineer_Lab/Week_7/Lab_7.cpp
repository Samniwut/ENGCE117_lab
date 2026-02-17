#include <iostream>
#include <cstring>

using namespace std;

// โครงสร้างข้อมูล Node
struct studentNode {
    char name[20];
    int age; 
    char sex;
    float gpa;
    studentNode *next; // ตัวชี้ไปยัง Node ถัดไป
};

// Class พื้นฐาน (Base Class)
class LinkedList {
protected:
    studentNode *start; // ชี้ที่จุดเริ่มต้น
    studentNode *now;   // ตัวชี้ปัจจุบัน (Iterator)

public:
    // Constructor: กำหนดค่าเริ่มต้นเป็น null
    LinkedList() {
        start = nullptr;
        now = nullptr;
    }

    // Destructor: คืนค่า Memory ทั้งหมดเมื่อจบโปรแกรม
    virtual ~LinkedList() {
        studentNode *temp;
        while (start != nullptr) {
            temp = start;
            start = start->next;
            delete temp;
        }
    }

    // เพิ่ม Node ใหม่ต่อท้าย List
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

    // เลื่อน now ไปยัง Node ถัดไป
    void GoNext() {
        if (now != nullptr && now->next != nullptr) {
            now = now->next;
        }
    }

    // แสดงข้อมูล Node ปัจจุบันที่ now ชี้อยู่
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

// Class ที่สืบทอดมา (Derived Class)
class NewList : public LinkedList {
public:
    // เลื่อน now กลับไปที่จุดเริ่มต้น
    void GoFirst() {
        now = start;
    }

    // แสดงข้อมูล "ทุก Node" ตั้งแต่ต้นจนจบ (Polymorphism)
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
    // ทดสอบ LinkedList (Base Class)
    cout << "Testing LinkedList (Base):" << endl;
    LinkedList listA;
    listA.InsNodee("Somsak", 20, 'M', 3.50);
    listA.InsNodee("Somying", 21, 'F', 3.85);
    listA.ShowNode(); // จะแสดง Somsak
    listA.GoNext();
    listA.ShowNode(); // จะแสดง Somying
    
    cout << endl;

    // ทดสอบ NewList (Derived Class)
    cout << "Testing NewList (Derived):" << endl;
    NewList listB;
    listB.InsNodee("Alice", 19, 'F', 3.90);
    listB.InsNodee("Bob", 22, 'M', 2.75);
    listB.InsNodee("Charlie", 20, 'M', 3.20);
    
    listB.ShowNode(); // แสดงทุกคนเพราะเรา override ไว้
    
    return 0;
}