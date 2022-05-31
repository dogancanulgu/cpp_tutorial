#include <iostream>
using namespace std;

int main() {
    // int i = 0;
    // while (i < 10) {
    //     if (i == 5) {
    //         break;
    //     }
    //     cout << "i : " << i << endl;
    //     i++;
    // }

    // for (int i = 0; i < 10; i++) {
    //     if (i == 5) {
    //         continue;
    //     }
    //     cout << "i : " << i << endl;
    // }

    // int i = 0;
    // while (i < 10) {
    //     if (i == 5) {
    //         i++;
    //         continue;
    //     }
    //     cout << "i : " << i << endl;
    //     i++;
    // }

    string sys_username = "dogancan_ulgu";
    string sys_password = "123456";

    string username, password;

    while (true) {
        cout << "Kullanici Adi : ";
        cin >> username;
        cout << "Parola : ";
        cin >> password;

        if (username == sys_username && password == sys_password) {
            cout << "Hosgeldiniz, " << username << endl;
            break;
        } else if (username != sys_username && password == password) {
            cout << "Kullanici Adi Hatali" << endl;
        } else if (username == sys_username && password != sys_password) {
            cout << "Kullanici Sifresi Hatali" << endl;
        } else {
            cout << "Kullanici Adi ve Sifresi Hatali" << endl;
        }
    }   

    return 0;
}