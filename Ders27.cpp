#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string description;
};

void show(Employee* employee) {
    employee->id = 30;
    cout << "ID: " << employee->id << endl;
    cout << "Name: " << employee->name << endl;
    cout << "Description: " << employee->description << endl;
}

void showEmployee(Employee employee) {
    employee.id = 30;
    cout << "ID: " << employee.id << endl;
    cout << "Name: " << employee.name << endl;
    cout << "Description: " << employee.description << endl;
}

int main() {

    Employee employee1 = { 12, "Dogancan Ulgu", "Yazilim"};

    // showEmployee(employee1);
    show(&employee1);

    cout << employee1.id << endl;

    // Employee* ptr = &employee1;
    // cout << ptr->name << endl;
    
    return 0;
}