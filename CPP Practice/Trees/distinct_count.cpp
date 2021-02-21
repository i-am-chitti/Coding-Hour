#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll T;
    cin>>T;
    while(T--) {
        ll temp,X,N;
        cin>>N>>X;
        set<ll> set;
        for(ll i=0;i<N;i++) {
            cin>>temp;
            set.insert(temp);
        }
        if(set.size()==X) {
            cout<<"Good\n";
        }
        else if(set.size()<X) {
            cout<<"Bad\n";
        }
        else cout<<"Average\n";
    }
}