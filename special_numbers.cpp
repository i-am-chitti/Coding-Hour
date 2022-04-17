/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

void doSomeMath(ll p1, ll p2, ll n1, ll n2, ll N, ll &minCost, ll upCost, ll downCost) {
    if(p1+p2>N) minCost = min(minCost, (p1+p2-N)*upCost);
    else minCost = min(minCost, (N-p1-p2)*downCost);
    if(p1+p2>N) return;
    doSomeMath(p1*n1,p2,n1,n2,N, minCost, upCost, downCost);
    doSomeMath(p1,p2*n2,n1,n2,N, minCost, upCost, downCost);
    doSomeMath(p1*n1,p2*n2,n1,n2,N, minCost, upCost, downCost);
}

void solve(){
    ll N;
    cin>>N;
    ll minCost = LONG_LONG_MAX;
    ll upCost, downCost;
    cin>>downCost>>upCost;
    doSomeMath(3,5,3,5,N,minCost, upCost,downCost);
    doSomeMath(5,7,5,7,N,minCost,upCost,downCost);
    doSomeMath(3,7,3,7,N,minCost,upCost,downCost);
    cout<<minCost;
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