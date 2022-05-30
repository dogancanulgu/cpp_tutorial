#include <iostream>
using namespace std;

int main() {
    string sys_username = "dogancan_ulgu";
    string sys_password = "123456";
    
    string username, password;

    cout << "Kullanici Adinizi Girin: ";
    cin >> username;

    cout << "Parola Giriniz: ";
    cin >> password;

    if (sys_username == username && sys_password == password) {
        cout << "Hosgeldiniz" << endl;
    } else if (sys_username != username && sys_password == password) {
        cout << "Kullanici Adiniz Yanlis" << endl;
    } else if (sys_username == username && sys_password != password) {
        cout << "Parolaniz Yanlis" << endl;
    } else {
        cout << "Kullanici Adi ve Parola Yanlis" << endl;
    }

    return 0;

}