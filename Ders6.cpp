#include <iostream>
using namespace std;

int main() {

    string password = "yazilimbilimi";
    string input;
    cout << "Lutfen parolanizi girinizi: " << endl;
    cin >> input;

    if(input == password) {
        cout << "Parolanizi Dogru Girdiniz..";
    } else {
        cout << "Parolanizi Yanlis Girdiniz..";
    }
    
    return 0;
}