#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll T,N,X;
    cin>>T;
    while(T--) {
        cin>>N>>X;
        vector<ll> capacity(N,0);
        for(int i=0;i<N;i++) cin>>capacity[i];
        sort(capacity.begin(),capacity.end());
        // for(int i=0;i<N;i++) cout<<capacity[i]<<" ";
        // cout<<endl;
        ll nBottles=0,tCapacity=0;
        for(int i=0;i<N;i++) {
            tCapacity+=capacity[i];
            if(tCapacity>X) break;
            nBottles++;
        }
        cout<<nBottles<<endl;
    }
}