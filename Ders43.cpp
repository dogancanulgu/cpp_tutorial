#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int salary;
        int id;
    public:
        Employee(string name, int salary, int id) {
            this->name = name;
            this->salary = salary;
            this->id = id;
        }
        void getInfos() {
            cout << "Isim: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Id: " << id << endl;
        }
};

int main() {
    Employee employee("Dogancan", 300,1);
    employee.getInfos();


    return 0;
}