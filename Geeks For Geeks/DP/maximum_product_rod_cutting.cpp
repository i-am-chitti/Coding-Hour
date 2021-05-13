/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

ll getMaxProduct(ll N) {
    if(N<=1) return N;
    ll res=N;
    for(int i=1;i<=N;i++) {
        res=max(res,i*getMaxProduct(N-i));
    }
    return res;
}

void solve(){
    ll N;
    cin>>N;
    cout<<getMaxProduct(N)<<endl;
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