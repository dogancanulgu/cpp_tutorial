#include <iostream>
using namespace std;

class Employee {
    public: 
        Employee() {
            cout << "Constructor Cagrildi" << endl;
        }
        ~Employee() {
            cout << " destructor Cagrildi" << endl;
        }
};

int main() {
    Employee *emp = new Employee();

    delete emp;

    return 0;
}