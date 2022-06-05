#include <iostream>
using namespace std;

struct Address {
    string cityName;
    int no;
};

struct Employee {
    int id;
    string name;
    string department;
    Address* address;
};

int main() {
    Employee employee;
    employee.id = 12;
    employee.name = "Dogancan";
    employee.department = "Yazilim";
    Address address = {"Istanbul", 34};
    employee.address = &address;

    Employee* ptr = &employee;
    cout << ptr->address->cityName << endl;

    return 0;
}