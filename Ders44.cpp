#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int salary;
        int id;
    public:
        Employee() {
            this->name = "Bilgi yok";
            this->salary = 0;
            this->id = 0;
        }
        Employee(string name, int salary) {
            this->name = name;
            this->salary = salary;
            this->id = -1;
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

int main() {
    Employee employee1("Dogancan", 5000);
    Employee employee2("Dogan", 6000, 1); 
    Employee employee3;
    employee1.showInfos();
    employee2.showInfos();
    employee3.showInfos();
    
    return 0;
}