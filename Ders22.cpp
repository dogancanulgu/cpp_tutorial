#include <iostream>
using namespace std;


void printArray(int *ptr, int size) {

    for (int i = 0; i < size; i++) {
        cout << ptr[i] << endl;
    }

}

int main() {
    int a[] = { 0, 1, 2, 3, 4, 5};

    printArray(a, 6);

    return 0;
}