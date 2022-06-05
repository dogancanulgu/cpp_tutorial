#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 5;

    delete ptr;
    // int a[] = { 0, 1, 2, 3, 4, 5};

    // ptr = a;
    // cout << ptr[1] << endl;


    return 0;
};