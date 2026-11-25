#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

// Derived Class
class Employee : public Person {
private:
    string role;
    double salary;

public:
    void setEmployee(string n, int a, string r, double s) {
        setPerson(n, a);
        role = r;
        salary = s;
    }

    void display() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Role  : " << role << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setEmployee("Md Sahil", 20, "Junior Developer", 45000);
    emp.display();
    return 0;
}
