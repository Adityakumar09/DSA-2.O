#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) {
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            int tem=arr[i];
            arr[i]=arr[j];
            arr[j]=tem;
            i++;
            j--;
        }
    }
int main() {
    vector<int> arr={0};
    reverseArray(arr);
    return 0;
}