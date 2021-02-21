#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,Nth,base=0,top=7;
    cin>>T;
    while(T--) {
        cin>>Nth;
        if(abs(Nth-base)<=abs(top-Nth)) {
            cout<<"A"<<endl;
            base=Nth;
        }
        else {
            cout<<"B"<<endl;
            top=Nth;
        }
    }   
}