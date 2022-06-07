#include <iostream>

using namespace std;

class Employee {
public:
    int id;
    string name;
    int salary;
    
    void showInfos();
};

void Employee::showInfos() {
    cout << "Id: " << Employee::id << endl;
    cout << "Name: " << Employee::name << endl;
    cout << "Salary: " << Employee::salary << endl;
};