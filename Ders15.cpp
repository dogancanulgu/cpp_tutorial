#include <iostream>
using namespace std;

int main(){

    int islem;
    cout << "Islemi giriniz:";
    cin >> islem;

    switch(islem){
        case 1:
            cout << "1. islemi Sectiniz:" << endl;
            break;
        case 2:
            cout << "2. islemi Sectiniz:" << endl;
            break;
        case 3:
            cout << "3. islemi Sectiniz:" << endl;
            break;
        case 4:
            cout << "4 islemi Sectiniz:" << endl;
            break;
        default:
            cout << "Gecersiz islem";
            break;
            
    }

    return 0;
}