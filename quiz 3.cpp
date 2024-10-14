#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
};
class Employee {
protected:
    int employeeID;
    double salary;

public:
    Employee(int id, double sal) : employeeID(id), salary(sal) {}
};
class Manager : public Person, public Employee {
private:
    string department;

public:
    Manager(string n, int a, int id, double sal, string dept)
        : Person(n, a), Employee(id, sal), department(dept) {}

    void displayDetails() {
        cout << "Manager Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager mgr("Alice Johnson", 40, 101, 75000.50, "HR");

    mgr.displayDetails();

    return 0;
}
