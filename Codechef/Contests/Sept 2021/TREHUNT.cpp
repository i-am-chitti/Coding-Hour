/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 998244353
using namespace std;

typedef long long ll;

void helper(int N,int M, int i, int j, int k) {
    while(k<=N+M) {
        
    }
}

void solve(){
    int N,M;
    ll t;
    cin>>N>>M;
    if(M<N) {
        M+=N;
        N=M-N;
        M-=N;
    }
    ll aMin=0, aMax=N-1;
    ll bMin=0, bMax=M-1;

    vector<ll> A(aMax+bMax, 0);

    ll res=0;

    res  += (((N%MOD)*((M-1)%MOD))%MOD)+(((M%MOD)*((N-1)%MOD))%MOD);

    ll q=31;

    for(int k=2;k<=aMax+bMax;k++) {
        ll sum=0;
        ll temp=0;

        //cout<<sum<<"\n";
        res = ((res%MOD) + ((sum%MOD)*(q%MOD))%MOD)%MOD;
        q = ((q%MOD) * (31%MOD))%MOD;
    }

    for(int i=0;i<=N-1;i++) {
        for(int j=0;j<=M-1;j++) {
            int k=1,t=4;
            while(k<=min(i,j)-1) {
                A[i]+=t;
                t+=4;
                k++;
            }
            helper(N-1,M-1,i,j,k);
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