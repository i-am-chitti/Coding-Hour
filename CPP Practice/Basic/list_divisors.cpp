#include<bits/stdc++.h>
using namespace std;

int main() {
    int num=100;
    for(int i=1;i<=sqrt(num);i++) {
        if(num%i==0) {
            if(num/i==i) cout<<i<<"\t";
            else cout<<i<<"\t"<<num/i<<"\t";
        }
    }
    cout<<endl;
    if(0%2!=0) cout<<"true";
    else cout<<"false";
}