#include <iostream>
using namespace std;

void selamla();
void factorial(int sayi) {
    int faktoriyel = 1;
    for (int i = 1; i <= sayi; i++) {
        faktoriyel *= i;
    }
    cout << "Faktoriyel: " << faktoriyel << endl;
}

int main() {
    selamla();
    int sayi;
    cout << "Bir sayi giriniz.. " << endl;
    cin >> sayi;
    factorial(sayi);

    return 0;
}

void selamla() {
    cout << "Naber" << endl;
    cout << "Nasilsin?" << endl;
}