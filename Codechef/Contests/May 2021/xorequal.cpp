/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define mod 1000000007
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

ll power(ll n, ll exp) {
    ll res=1;
    while(exp) {
        if(exp%2==1) res = ((res%mod) * (n%mod))%mod;
        n = ((n%mod) * (n%mod))%mod;
        exp/=2;
    }
    return res;
}

void solve(){
    ll N;
    cin>>N;
    cout<<power(2,N-1);
    cout<<"\n";
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}