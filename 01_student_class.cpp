#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Constructor
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks  : " << marks << "%" << endl;
    }
};

int main() {
    Student s1("Md Sahil", 36, 85.5);
    s1.display();
    return 0;
}
