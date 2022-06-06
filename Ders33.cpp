#include <iostream>
using namespace std;

int main() {
    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    ptr1 = new int;
    *ptr1 = 10;
    ptr2 = ptr1;
    delete ptr1;

    *ptr2 = 20;
    cout << *ptr2 << endl;
    // ptr = new int;
    // *ptr = 10;

    // delete ptr;

    // *ptr = 10;
    // cout << *ptr << endl;

    return 0;
}