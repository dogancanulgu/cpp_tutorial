#include <iostream>
using namespace std;

struct Student {
    int id;
    char letter;
};

int main() {
    int a = 10;
    cout << "Integer: " << sizeof(a) << endl;
    cout << "Char: " << sizeof(char) << endl;
    cout << "Double: " << sizeof(double) << endl;
    cout << "Float: " << sizeof(float) << endl;

    cout << "Student: " << sizeof(Student) << endl;

    return 0;
}