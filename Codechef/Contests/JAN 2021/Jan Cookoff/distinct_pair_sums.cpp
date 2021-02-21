#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll solve(ll L, ll R) {
    if(L==R) return 1;
    ll N=R-L+1,count=1;
    if(N%2==0) {
        count*=N/2;
        count*=N-1;
    }
    else {
        count*=(N-1)/2;
        count*=N;
    }
    return count+N;
}

int main() {
    ll T;
    cin>>T;
    while(T--) {
        ll L,R;
        cin>>L>>R;
        cout<<solve(L,R)<<endl;
    }
}