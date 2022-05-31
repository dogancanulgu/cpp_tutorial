#include <iostream>
using namespace std;

int main() {
    // int i;

    // for (i = 1; i < 10; i++) {
    //     cout << "i : " << i << endl;
    // }

    int sayi;
    cout << "Sayi: ";
    cin >> sayi;
    int faktoriyel = 1;
    for (int i = 1; i <= sayi; i++) {
        faktoriyel *= i;
    }
    cout << "Faktoriyel: " << faktoriyel << endl;

    return 0;
}