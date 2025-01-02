#include <iostream>
using namespace std ;
int main() {
    int a[6]={5,1,8,3,2,9};
    for(int i=5;i>=0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}