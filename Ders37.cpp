#include <iostream>
using namespace std;

class Student {
    public:
        string name;
    void tellName() {
        cout << "Benim adim " << name << endl;
    }
};

int main() {
    Student student1;
    Student student2;
    student1.name = "Dogancan";
    student2.name = "Seval";
    student1.tellName();
    student2.tellName();

    return 0;
}