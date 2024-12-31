#include <iostream>
using namespace std;

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference function: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping (main): x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapping (main): x = " << x << ", y = " << y << endl;
    return 0;
}
