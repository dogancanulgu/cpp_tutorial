#include <iostream>
using namespace std;


struct Employee {
    int id;
    string name;
    string department;
};

int main() {
    // int a = 5;

    // Employee employee1 = {12, "Dogancan", "Yazilim"};
    // cout << employee1.name << endl;

    // employee1.name = "Dogancan Ulgu";
    // cout << employee1.name << endl;

    Employee employee2;
    employee2.id = 123;
    employee2.name = "Can";
    employee2.department = "FullStack";
    cout << employee2.name << endl;
    return 0;
}