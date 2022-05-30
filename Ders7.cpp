#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    string islem;

    cout << "Hesap Makinesine Programina Hosgeldiniz" << endl;

    cout << "1. islem: Toplama islemi" << endl;
    cout << "2. islem: Cikarma islemi" << endl;
    cout << "3. islem: Carpma islemi" << endl;
    cout << "4. islem: Bolme islemi" << endl;

    cout << "Islemi giriniz: ";
    cin >> islem;

    if (islem == "1") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;

        cout << "Toplamlari: " << a + b << endl;

    } else if (islem == "2") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;

        cout << "Farklari: " << a - b << endl;

    } else if (islem == "3") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;

        cout << "Carpimlari: " << a * b << endl;
    } else if (islem == "4") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        
        cout << "Bolumleri: " << a / b << endl;
    } else {
        cout << "Gecersiz islem";
    }

    return 0;
}