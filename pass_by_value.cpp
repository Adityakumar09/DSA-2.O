#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue function: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping (main): x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapping (main): x = " << x << ", y = " << y << endl;
    return 0;
}
