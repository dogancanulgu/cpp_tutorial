#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int age;
    public:
        void setAge(int yas) {
            if(yas < 0) {
                cout << "Boyle bir deger giremezsiniz.." << endl;
            } else {
                age = yas;
            }
        };
        void setName(string isim) { 
            name = isim; 
        };
        int getAge () { 
            return age;
        };
        string getName() {
            return name;
        }
};

int main () {
    Employee employee;
    employee.setName("Dogancan");
    employee.setAge(-4);
    cout << employee.getName() << endl;
    cout << employee.getAge() << endl;

    return 0;
}