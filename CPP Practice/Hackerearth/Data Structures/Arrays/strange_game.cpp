#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll T,N,K,max,n,c;
    cin>>T;
    while(T--) {
        cin>>N>>K;
        vector<ll> alice(N,0);
        for(int i=0;i<N;i++) cin>>alice[i];
        max=INT_MIN;
        for(int i=0;i<N;i++) {
            cin>>n;
            if(n>max) max=n;
        }
        max++;
        c=0;
        for(int i=0;i<N;i++) {
            if(alice[i]<max) c+=max-alice[i];
        }
        cout<<c*K<<endl;
    }
}