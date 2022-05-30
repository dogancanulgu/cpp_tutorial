#include <iostream>
using namespace std;

int main() {
    string parola = "123456";
    string input;

    do {
        cout << "Parolanizi Girin: ";
        cin >> input;

        if(input != parola) {
            cout << "Parolayi Yanlis Girdiniz.." << endl;
        }
    } while (input != parola);

    cout << "Parolayi Dogru Girdiniz..";

    return 0;
}