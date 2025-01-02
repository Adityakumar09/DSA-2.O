#include <iostream>
using namespace std ;
int main() {
    int a[6]={5,1,8,3,2,9};
    for(int i=0;i<6;i++){
        int temp=i;
        for(int j=i+1;j<6;j++){
            if(a[temp]>a[j]){
                temp=j;
            }
        }
        swap(a[i],a[temp]);
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}