#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N,X,Y;
    cin>>N>>X;
    while(N--) {
        cin>>Y;
        if(Y>=X) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}