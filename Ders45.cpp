#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int salary;
        int id;
    public:
        Employee() {
            this->name = name;
            this->salary = salary;
            this->id = id;
        }
        Employee(string name, int salary, int id) {
            this->name = name;
            this->salary = salary;
            this->id = id;
        }
        void showInfos() {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Id: " << id << endl;
        }
};

void deneme(Employee emp) {
    emp.showInfos();
}
void denemePtr(Employee* ptr) {
    ptr->showInfos();
}

int main() {
    Employee employee("Dogancan", 5000, 1);
    // deneme(employee);
    denemePtr(&employee);

    // employee.showInfos();
    return 0;
}