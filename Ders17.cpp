#include <iostream>
using namespace std;

int toplama(int a, int b, int c) {
    // cout << "Toplama: " << a + b + c << endl;
    return a + b + c;
}

int main() {
    int a = toplama(5,6,7);
    // toplama(5,6,7);

    cout << "a: " << a << endl;

    return 0;
}