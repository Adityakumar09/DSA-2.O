// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std ;
int main() {
    int index=0;
    
    string s="leEtcoAde",temp,new1;
    while(index<s.size()){
        if(s[index]=='a'||s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u'||s[index]=='A'||s[index]=='E'||s[index]=='I'||s[index]=='O'||s[index]=='U'){
            temp+=s[index];
        }
        index++;
    } 
    cout<<temp<<endl;
    sort(temp.begin(),temp.end());
    cout<<temp<<endl;
    int inde=0;
    index=0;
    while(index<s.size()){
        if(s[index]=='a'||s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u'||s[index]=='A'||s[index]=='E'||s[index]=='I'||s[index]=='O'||s[index]=='U'){
            new1+=temp[inde];
            inde++;
        }
        else{
            new1+=s[index];
        }
        index++;
    }
    cout<<new1<<endl;
    return 0;
}