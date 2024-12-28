#include <iostream>
using namespace std;

int main() {
    int rem, i = 0, d = 10;
    int arr[100]; 

    rem = d;

    while (rem > 1) {
        arr[i] = rem % 2; 
        rem = rem / 2;  
        i++;
    }
    arr[i] = rem; 
    cout << "Binary representation of " << d << ": ";
    for (int j = i; j >= 0; j--) {
        cout << arr[j];
    }
    cout << endl;

    return 0;
}
