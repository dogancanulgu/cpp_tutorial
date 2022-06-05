#include <iostream>
using namespace std;


void degerDegistir(int *ptr) {
    *ptr = 20;
    cout << "Fonksiyon icindeki degeri: " << *ptr << endl;
    // af = 20;
    // cout << "Fonksiyon icindeki degeri: " << af << endl;
}

int main() {
    int a = 10;
    cout << "a degiskenin degeri: " << a << endl;
    degerDegistir(&a);
    cout << "Fonksiyon bittikten sonra a degiskenin degeri: " << a << endl;


    return 0;
}