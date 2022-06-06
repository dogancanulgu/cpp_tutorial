#include <iostream>
using namespace std;

int main() {
    int array[] = {0,1,2,3,4,5,6,7};

    // for (int i = 0; i < 8; i++) {
    //     cout << array[i] << endl;
    // }

    for (int item:array) {
        cout << item << endl;
    }

    return 0;
}