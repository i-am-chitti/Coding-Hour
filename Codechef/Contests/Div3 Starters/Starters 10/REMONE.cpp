/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    ll N;
    cin>>N;
    vector<ll> A(N), B(N-1);

    ll sumA=0, sumB=0;

    for(int i=0;i<N;i++) {
        cin>>A[i];
        sumA+=A[i];
    }

    for(int i=0;i<N-1;i++) {
        cin>>B[i];
        sumB+=B[i];
    }

    ll temp = sumB-sumA;

    ll res=INT_MAX;

    for(int i=0;i<N;i++) {
        ll t=temp+A[i];
        if(t%(N-1) == 0) {
            ll X=t/(N-1);
            if(X>0) res = min(res, X);
        }
    }

    cout<<res<<"\n";

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