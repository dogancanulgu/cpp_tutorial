#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int *ptr = &a;

    cout << "Degiskenin Adresi: " << &a << endl;
    cout << "Degiskenin Adresi: " << ptr << endl;

    cout << "Degiskenin Degeri: " << *ptr << endl;

    *ptr = 6;
    cout << "Degiskenin Yeni Degeri: " << *ptr << endl;

    return 0;
}