#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
    public:
        void setName(string isim) {
            name = isim;
        }
        string getName() { 
            return name; 
        }
};

int main() {

    Employee employee;
    employee.setName("Dogancan");
    cout << employee.getName() << endl;

    return 0;
}