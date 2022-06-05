#include <iostream>
using namespace std;

struct Address {
    string cityName;
    int no;
};

struct Employee {
    int id;
    string name;
    string description;
    Address address;
};

int main() {
    Employee employee = {12, "Dogancan Ulgu", "Yazilim", {"Istanbul", 34}};
    employee.id = 15;
    employee.address.cityName = "istanbul";
    employee.address = {"Bursa", 16};
    // cout << employee.name << endl;
    cout << employee.address.cityName << endl;

    return 0;
}